

#include "lcd.h"

uint8_t character1[8]={0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00};
uint8_t character2[8]={0x18, 0x1C, 0x1E, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F};
uint8_t character3[8]={0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x07, 0x03};
uint8_t character4[8]={0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F};
uint8_t character5[8]={0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1E, 0x1C, 0x18};
uint8_t character6[8]={0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F};
uint8_t character7[8]={0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F};
uint8_t character8[8]={0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F};
unsigned char MaLCD[]={"0123456789"};

void intro(void){
	LCDI2C_setCursor(0,0);
	LCDI2C_write(0xff);
	LCDI2C_write(0);
	LCDI2C_write(1);
	LCDI2C_setCursor(0,1);
	LCDI2C_write(0xff);
	LCDI2C_write(0);
	LCDI2C_write(1);

	LCDI2C_setCursor(3,0);
	LCDI2C_write(7);
	LCDI2C_write(0);
	LCDI2C_write(1);
	LCDI2C_setCursor(3,1);
	LCDI2C_write(2);
	LCDI2C_write(3);
	LCDI2C_write(4);

	LCDI2C_setCursor(6,0);
	LCDI2C_write(0xff);
	LCDI2C_write(5);
	LCDI2C_write(4);
	LCDI2C_setCursor(6,1);
	LCDI2C_write(0xff);
	LCDI2C_write(3);
	LCDI2C_write(1);

	LCDI2C_setCursor(9,0);
	LCDI2C_write(7);
	LCDI2C_write(0);
	LCDI2C_write(1);
	LCDI2C_setCursor(9,1);
	LCDI2C_write(2);
	LCDI2C_write(3);
	LCDI2C_write(4);

	LCDI2C_setCursor(12,0);
	LCDI2C_write(0);
	LCDI2C_write(0xff);
	LCDI2C_write(0);
	LCDI2C_setCursor(12,1);
	LCDI2C_write(0x20);
	LCDI2C_write(0xff);
	LCDI2C_write(0x20);

	LCDI2C_setCursor(15,0);
	LCDI2C_write(0xff);
	LCDI2C_setCursor(15,1);
	LCDI2C_write(5);

	Delay(2000);
	LCDI2C_clear();
	Delay(5);
	LCDI2C_setCursor(0,1);
	LCDI2C_write(0xA1);
	LCDI2C_write(0xA1);
	LCDI2C_setCursor(14,1);
	LCDI2C_write(0xA1);
	LCDI2C_write(0xA1);

	LCDI2C_setCursor(2,0);
	LCDI2C_write(7);
	LCDI2C_write(0);
	LCDI2C_write(1);
	LCDI2C_setCursor(2,1);
	LCDI2C_write(0xff);
	LCDI2C_write(0);
	LCDI2C_write(0xff);

	LCDI2C_setCursor(6,0);
	LCDI2C_write(0xff);
	LCDI2C_write(0);
	LCDI2C_write(1);
	LCDI2C_setCursor(6,1);
	LCDI2C_write(0xff);
	LCDI2C_write(0);
	LCDI2C_write(1);

	LCDI2C_setCursor(10,0);
	LCDI2C_write(0xff);
	LCDI2C_write(1);
	LCDI2C_write(7);
	LCDI2C_write(0xff);
	LCDI2C_setCursor(10,1);
	LCDI2C_write(0xff);
	LCDI2C_write(0x20);
	LCDI2C_write(0x20);
	LCDI2C_write(0xff);

	Delay(2000);
	LCDI2C_clear();
	Delay(5);

	LCDI2C_setCursor(0,0);
  LCDI2C_write_String("Loading");
	Delay(1000);
	LCDI2C_write_String("..");

	LCDI2C_setCursor(9,0);
	LCDI2C_write(5);
	LCDI2C_write(5);
	LCDI2C_write(1);
	LCDI2C_setCursor(9,1);
	LCDI2C_write(0xff);
	LCDI2C_write(6);
	LCDI2C_write(6);
	LCDI2C_setCursor(15,0);

	LCDI2C_setCursor(12,0);
	LCDI2C_write(0xff);
	LCDI2C_write(5);
	LCDI2C_write(5);
	LCDI2C_setCursor(12,1);
	LCDI2C_write(6);
	LCDI2C_write(6);
	LCDI2C_write(4);

	LCDI2C_setCursor(15,0);
	LCDI2C_write_String("%");

	Delay(800);
	LCDI2C_setCursor(0,1);
	LCDI2C_write_String("..");

	LCDI2C_setCursor(9,0);
	LCDI2C_write(0xff);
	LCDI2C_write(5);
	LCDI2C_write(5);
	LCDI2C_setCursor(9,1);
	LCDI2C_write(6);
	LCDI2C_write(6);
	LCDI2C_write(4);

	LCDI2C_setCursor(12,0);
	LCDI2C_write(7);
	LCDI2C_write(0);
	LCDI2C_write(1);
	LCDI2C_setCursor(12,1);
	LCDI2C_write(2);
	LCDI2C_write(3);
	LCDI2C_write(4);

	Delay(800);
	LCDI2C_setCursor(2,1);
	LCDI2C_write_String("..");

	LCDI2C_setCursor(9,0);
	LCDI2C_write(0);
	LCDI2C_write(0);
	LCDI2C_write(0xff);
	LCDI2C_setCursor(9,1);
	LCDI2C_write(0x20);
	LCDI2C_write(0xff);
	LCDI2C_write(0x20);

	LCDI2C_setCursor(12,0);
	LCDI2C_write(0xff);
	LCDI2C_write(5);
	LCDI2C_write(5);
	LCDI2C_setCursor(12,1);
	LCDI2C_write(6);
	LCDI2C_write(6);
	LCDI2C_write(4);

	Delay(800);
	LCDI2C_setCursor(4,1);
	LCDI2C_write_String("....");

	LCDI2C_setCursor(9,0);
	LCDI2C_write(7);
	LCDI2C_write(5);
	LCDI2C_write(0xff);
	LCDI2C_setCursor(9,1);
	LCDI2C_write(3);
	LCDI2C_write(3);
	LCDI2C_write(4);

	LCDI2C_setCursor(12,0);
	LCDI2C_write(7);
	LCDI2C_write(5);
	LCDI2C_write(0xff);
	LCDI2C_setCursor(12,1);
	LCDI2C_write(3);
	LCDI2C_write(3);
	LCDI2C_write(4);

	Delay(1000);
	LCDI2C_clear();
	Delay(5);
	LCDI2C_setCursor(0,1);
	LCDI2C_write_String("Ready....");
	LCDI2C_setCursor(9,0);
	LCDI2C_write(7);
	LCDI2C_write(0);
	LCDI2C_write(0);
	LCDI2C_setCursor(9,1);
	LCDI2C_write(2);
	LCDI2C_write(3);
	LCDI2C_write(1);

	LCDI2C_setCursor(12,0);
	LCDI2C_write(7);
	LCDI2C_write(0);
	LCDI2C_write(1);
	LCDI2C_setCursor(12,1);
	LCDI2C_write(2);
	LCDI2C_write(3);
	LCDI2C_write(4);

	LCDI2C_setCursor(15,0);
	LCDI2C_write(0xff);
	LCDI2C_setCursor(15,1);
	LCDI2C_write(5);

	Delay(800);
	LCDI2C_clear();
	Delay(5);
	LCDI2C_setCursor(0,0);
	LCDI2C_write_String("4axis value: ");

	LCDI2C_setCursor(15,0);
	LCDI2C_write(0xDF);

	LCDI2C_setCursor(0,1);
	LCDI2C_write_String("~");

	LCDI2C_setCursor(4,1);
	LCDI2C_write(0xDF);
	LCDI2C_write_String("~");
	LCDI2C_setCursor(9,1);
	LCDI2C_write(0xDF);
	LCDI2C_write_String("~");
	LCDI2C_setCursor(14,1);
	LCDI2C_write(0xDF);
}
