/* Servo motor with Arduino example code. Position and sweep. More info: https://www.makerguides.com/ */

// Include the servo library:
#include <Servo.h>

// Create a new servo object:

Servo s13, s12, s11, s10, s9, s8;

// Define the servo pin:
#define servoPin 13, 12. 10, 9, 8


void setup() {
  // Attach the Servo variable to a pin:
  s13.attach( 13);
  s12.attach( 12);
  s11.attach( 11);
  s10.attach( 10);
 s9.attach( 9);
  s8.attach( 8);
}

void loop() {
  // Tell the servo to go to a particular angle:
  //90 degree position
   s13.write(90);
  s12.write(90);
  s11.write(90);
  s10.write(90);
  s9.write(90);
  s8.write(90);
  delay(1000);
//return it to 0 position
     s13.write(0);
  s12.write(0);
  s11.write(0);
  s10.write(0);
  s9.write(0);
  s8.write(0);
  delay(1000);


  delay(1000);
}
