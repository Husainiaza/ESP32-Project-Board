#include <LiquidCrystal_I2C.h>

//----ISTIHAR LCD I2C --------------------------------------------------------------
LiquidCrystal_I2C lcd(0x27,20,2);

void setup() {
    
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("ESP32 - UJI LCD");
  delay(2000);
  lcd.clear();
}
 
void loop() {
 
    lcd.setCursor(0,0);
    lcd.print("Paparan Baris 0");
    lcd.setCursor(0,1);
    lcd.print("1234567890abcdef");
}
