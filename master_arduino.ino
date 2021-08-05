//master
#define echopin  9 // echo pin
#define trigpin 3 // Trigger pin
long duration, distance;
int led =4;
int eco = 9;
int trg = 3;

void setup()
{
  pinMode (trg, OUTPUT);
  pinMode (eco, INPUT );
}

void loop(){
  digitalWrite(trg, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trg, HIGH);
  delayMicroseconds(10);
  digitalWrite(trg, LOW);
  
  duration = pulseIn(eco, HIGH);
 distance = duration * 0.034 / 2; 
  if (distance < 80){
 digitalWrite(led, HIGH);
} 
}
