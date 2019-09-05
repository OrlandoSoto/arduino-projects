//Motor Connections
//Change this if you wish to use another diagram
#define EnA 10
#define EnB 5
#define In1 9
#define In2 8
#define In3 7
#define In4 6
 
 
void setup()
{
  // All motor control pins are outputs
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
}
void goStraight()   //run both motors in the same direction
{
  // turn on motor A
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  // set speed to 150 out 255
  analogWrite(EnA, 100);
  // turn on motor B
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  // set speed to 150 out 255
  analogWrite(EnB, 100);
  delay(1000);
  // now turn off motors
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);  
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  delay(1000);
    // turn on motor A
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
    // set speed to 150 out 255
  analogWrite(EnA, 50);
  delay(500);
}
void loop()
{
  goStraight();
}
