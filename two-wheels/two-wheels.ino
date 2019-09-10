//Motor Connections
//Change this if you wish to use another diagram
int Analog_Pin = A5;
int Digital_Pin = 2;
int Analog = 0;
int Digital = LOW;
#define EnA 10
#define EnB 5
#define In1 9
#define In2 8
#define In3 7
#define In4 6
 
 
void setup()
{
  // All motor control pins are outputs
  pinMode(Analog_Pin, INPUT);
  pinMode(Digital_Pin, INPUT);
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
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
  // set speed to 150 out 255
  //analogWrite(EnA, 100);
  // turn on motor B
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  // set speed to 150 out 255
  //analogWrite(EnB, 100);
  delay(1000);

}
void turnLeft()
{
      // turn on motor A
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
    // set speed to 150 out 255
  analogWrite(EnA, 50);
  delay(500);
}
void turnRight()
{
      // turn on motor B
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
    // set speed to 150 out 255
  delay(500);
}
void goBack()
{
    // turn on motor A
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  // set speed to 150 out 255
  analogWrite(EnA, 100);
  // turn on motor B
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  // set speed to 150 out 255
  analogWrite(EnB, 100);
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
  Analog = analogRead (Analog_Pin);
  if (Analog > 200)
  {
    
    Serial.println(" reached ");
    Serial.println(Analog);
    goStraight();
    stopWheels();
    turnRight();
    stopWheels();
  }    
  //delay (200);
  
}
