//#include <CurrentTransformer.h>
#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
//#include "DHTesp.h"
#define u8g_logo_width  128
#define u8g_logo_height 64
#endif

U8G2_SH1106_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);

void setup(void) 
{

  Serial.begin(9600);
  u8g2.begin();
  
}

void loop()
{
  u8g2.clearBuffer();          // clear the internal memory
  u8g2.setFont(u8g2_font_bitcasual_tr); // choose a suitable font
  u8g2.setCursor(0, 12); // write something to the internal memory
  u8g2.print(" Hellow World !") ;
  u8g2.setFont(u8g2_font_bitcasual_tr); // choose a suitable font
  u8g2.setCursor(0, 27); // write something to the internal memory
  u8g2.print(" Created by Safwan Senen ") ;
  u8g2.sendBuffer();
  delay(3000);
}
