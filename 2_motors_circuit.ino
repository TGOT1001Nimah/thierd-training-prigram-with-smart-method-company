//Motor B
const int motorPin3  = 11; // Pin  7 of L293
const int motorPin4  = 10;  // Pin  2 of L293


void setup()
{
    //A and B
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
}

void loop()
{

    //This code  will turn Motor A and B forward for 8 sec.
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    delay(8000);
    //This code will turn Motor A and B backward for 4 sec.
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(4000);
}
