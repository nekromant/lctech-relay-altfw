#include <nuvoton/functions.h>
#include <nuvoton/N76E003.h>
#include <nuvoton/Common.h>
#include <nuvoton/Delay.h>
#include <nuvoton/SFR_Macro.h>
#define RELAY4 P01
#define RELAY3 P04
#define RELAY2 P03
#define RELAY1 P05

#define RED P11
#define GREEN P00
#define BLUE P10

#define PWM_GREEN PWM3L
#define PWM_BLUE PWM2L
#define PWM_RED PWM1L

#define BUTTON1 P15
#define BUTTON2 P12

int getchar(void)
{
    UINT8 c;
    while (!RI);
    c = SBUF;
    RI = 0;
    return (c);
}

int putchar (int c)
{
	if (c == '\n')
		putchar('\r');
    TI = 0;
    SBUF = c;
    while(TI==0);
	return 0;
}

/**
 *  Stock protocol
 *  Open relay  1:A0 01 01 A2
 *  Close relay 1:A0 01 00 A1
 *  Open relay  2:A0 02 01 A3
 *  Close relay 2:A0 02 00 A2
 *  Open relay  3:A0 03 01 A4
 *  Close relay 3:A0 03 00 A3
 *  Open relay  4:A0 04 01 A5
 *  Close relay 4:A0 04 00 A4 
 * 
 */

void receive_packet(unsigned char *tmp)
{
	unsigned char checksum;
	tmp[0]=0;
	while (1) {
		do {
			tmp[0] = getchar();
		} while (tmp[0] != 0xA0);
		tmp[1] = getchar();
		tmp[2] = getchar();
		tmp[3] = getchar();
		checksum = tmp[0] + tmp[1] + tmp[2];
		if (checksum == tmp[3])
			break;
	}
}

void uart_loop() {
	unsigned char tmp[4];
	receive_packet(tmp);
	switch(tmp[1]) {
		case 1:
			RELAY1 = tmp[2] ? 1 : 0;
			break;
		case 2:
			RELAY2 = tmp[2] ? 1 : 0;
			break;
		case 3:
			RELAY3 = tmp[2] ? 1 : 0;
			break;
		case 4:
			RELAY4 = tmp[2] ? 1 : 0;
			break;
		case 0x11:
			PWM_RED = tmp[2]; 
			LOAD=1;
			break;
		case 0x12:
			PWM_GREEN = tmp[2]; 
			LOAD=1;
			break;
		case 0x13:
			PWM_BLUE = tmp[2]; 
			LOAD=1;
			break;
		/* Pollin' ain't a good idea here */
		case 0x21:
			printf("S1:%x\n", BUTTON1);
			break;
		case 0x22:
			printf("S2:%x\n", BUTTON2);
			break;
	}
}

void uart_init(UINT32 u32Baudrate) //T1M = 1, SMOD = 1
{
	P06_PushPull_Mode; 
	P07_Input_Mode;

	SCON = 0x50;  //UART0 Mode1,REN=1,TI=1
	TMOD |= 0x20; //Timer1 Mode1

	set_SMOD; //UART0 Double Rate Enable
	set_T1M;
	clr_BRCK; //Serial port 0 baud rate clock source = Timer1

#ifdef FOSC_160000
	TH1 = 256 - (1000000 / u32Baudrate + 1); /*16 MHz */
#endif
#ifdef FOSC_166000
	TH1 = 256 - (1037500 / u32Baudrate); /*16.6 MHz */
#endif
	set_TR1;
	set_TI; //For printf function must setting TI = 1
}

void gets(char *tmp) {
	do {
		*tmp = getchar();
	} while (*tmp++ != '\n');
}

int main()
{
	uart_init(19200);
	printf("\n\n\nHello world. I'm a hacky opensource firmware for LC-tech modules\n");
	printf("Go check out my blog https://ncrmnt.org for more awesome stuff\n");
	/* Relays */
	P01_PushPull_Mode;
	P03_PushPull_Mode;
	P04_PushPull_Mode;
	P05_PushPull_Mode;

	/* LEDS */
	P10_PushPull_Mode;
	P11_PushPull_Mode;
	P00_PushPull_Mode;

	/* Buttons */
	P12_Input_Mode;
	P15_Input_Mode;

	/* buttonz */
	PWMPH = 0;
	PWMPL = 255;
	PWM_CLOCK_FSYS;
	PWM_CLOCK_DIV_128;
	PWM_EDGE_TYPE;
	PWM1_P11_OUTPUT_ENABLE;
	PWM2_P10_OUTPUT_ENABLE;
	PWM3_P00_OUTPUT_ENABLE;

	RED = 0;
	GREEN = 0;
	BLUE = 1;

	Timer0_Delay1ms(500);
	PWM1H = 0;
	PWM2H = 0;
	PWM3H = 0;

	PWM_RED = 0x10;
	PWMRUN = 1;
	while (1)
	{
		uart_loop();
	}
}
