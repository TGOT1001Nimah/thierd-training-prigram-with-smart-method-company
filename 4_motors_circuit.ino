//Motor A
const int motorPin1  = 5;  // Pin 14 of L293
const int motorPin2  = 6;  // Pin 10 of L293
//Motor B
const int motorPin3  = 11; // Pin  7 of L293
const int motorPin4  = 10;  // Pin  2 of L293
//Motor C
const int motorPin11  = 3;  // Pin 14 of L293
const int motorPin22  = 2;  // Pin 10 of L293
//Motor D
 int motorPin33  = 13; // Pin  7 of L293
 int motorPin44  = 12;  // Pin  2 of L293

void setup()
{
  //A and B
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
  //c and D
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
}
void loop(){


    //This code  will turn Motor A and B forward for 8 sec.
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    //delay(8000);
    //This code  will turn Motor C and D forward for 8 sec.
    digitalWrite(motorPin11, LOW);
    digitalWrite(motorPin22, HIGH);
    digitalWrite(motorPin33, LOW);
    digitalWrite(motorPin44, HIGH);
    delay(8000);
  
     //This code will turn Motor A and B backward for 4 sec.
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
   // delay(4000);
   //This code will turn Motor C and D backward for 4 sec.
    digitalWrite(motorPin11, HIGH);
    digitalWrite(motorPin22, LOW);
    digitalWrite(motorPin33, HIGH);
    digitalWrite(motorPin44, LOW);
    delay(4000);   

}
