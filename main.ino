int lcd_key     = 0;
int adc_key_in  = 0;
#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5
int read_LCD_buttons()
{
 adc_key_in = analogRead(0);    
 if (adc_key_in < 50)   return btnRIGHT;  
 if (adc_key_in < 250)  return btnUP; 
 if (adc_key_in < 450)  return btnDOWN; 
 if (adc_key_in < 650)  return btnLEFT; 
 if (adc_key_in < 850)  return btnSELECT;  

 return btnNONE;  
}

void setup()
{
 lcd.begin(16, 2);         
 lcd.setCursor(0, 0);
}
 
void loop()
{
 lcd.print("Pronet Computer");
 lcd.setCursor(0,1);
 lcd.print("101101001011001010");
 delay(3000);
 lcd.clear();
 lcd.setCursor(0,0);
}

//lcd.clear();
