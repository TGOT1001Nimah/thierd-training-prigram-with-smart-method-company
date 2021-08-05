//slave
#include<Servo.h>
#include <LiquidCrystal.h>
Servo s6, s7, s8;
#define servoPin s6, s7, s8
long distance;
LiquidCrystal lcd(13, 12, 5, 4, 3, 2);
void setup()
{
  lcd.begin(16, 2);
  s6.attach( 6);
  s7.attach( 7);
  s8.attach( 8);
}

void loop(){
if (distance < 80){ 
  lcd.setCursor(1,0);
  lcd.print("welcome genius to");
  delay(1000);
  lcd.setCursor(1,1);
  lcd.print("smart-method");
  s8.write(30);
  s7.write(180);
  s6.write(90);
  delay(1000);
  s8.write(90);
  s7.write(0);
  s6.write(90);
  delay(1000);
} }
