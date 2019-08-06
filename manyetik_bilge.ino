#include <LiquidCrystal.h>

int sinyalpin = A0;
int val ;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
lcd.begin(16, 2);
//lcd.print("BILGE ATAKUL");
pinMode (sinyalpin, INPUT) ;
Serial.begin(9600);
}

void loop() {
Serial.println(sinyalpin);
Serial.println(val);
val = analogRead (sinyalpin);

if (val<20) {
lcd.setCursor(0, 0);
lcd.print("M.A.:");
lcd.setCursor(5, 0);
lcd.print(val);
lcd.setCursor(10, 0);
//lcd.print("Tesla");
lcd.setCursor(0, 1);
lcd.print("ManyetikAlan Yok");

}

else {

lcd.setCursor(0, 0);
lcd.print("M.A.:");
 lcd.setCursor(5, 0);
lcd.print(val);
lcd.setCursor(10, 0);
//lcd.print("Tesla");
lcd.setCursor(0, 1);
lcd.print("ManyetikAlan Var");
}
delay(1000);
lcd.clear();
}
