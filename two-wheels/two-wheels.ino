// Sound sensor
#define Analog_Pin A5

// Motor Connections
#define In1 9
#define In2 8
#define In3 7
#define In4 6
 
void setup()
{
  // All motor control pins are outputs
  pinMode(Analog_Pin, INPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  Serial.begin (9600);
}
void goStraight()   //run both motors in the same direction
{
  // turn on motor A
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  // turn on motor B
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  delay(1000);

}
void turnLeft()
{
  // turn on motor A
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  delay(500);
}
void turnRight()
{
  // turn on motor B
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  delay(900);
}
void goBack()
{
  // turn on motor A
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  // turn on motor B
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  delay(1000);
}
void stopWheels()
{
  // now turn off motors
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);  
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(500);
}
void loop()
{
  int Analog = analogRead (Analog_Pin);
  if (Analog > 200)
  {
    
    Serial.println(" reached ");
    Serial.println(Analog);

    turnRight();
    stopWheels();
    goStraight();
    stopWheels();
    delay(2000);
    turnRight();
    stopWheels();
    goStraight();
    stopWheels();
  }    
  
}
