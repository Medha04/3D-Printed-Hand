#include <Servo.h> 
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
const int flexpin1 = A0; 
const int flexpin2 = A1;
const int flexpin3 = A2;
const int flexpin4 = A3;
int flexposition1;   
  int servoposition1;  
  int flexposition2;
  int servoposition2;
  int flexposition3;
  int servoposition3;
  int flexposition4;
  int servoposition4;

void setup() 
{ 
  Serial.begin(9600);
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  /*servo1.write(10);
  servo2.write(10);
  servo3.write(10);
  servo4.write(10);*/
} 
void loop() 
{ 
  
  flexposition1 = analogRead(flexpin1);
  flexposition2 = analogRead(flexpin2);
  flexposition3 = analogRead(flexpin3);
  flexposition4 = analogRead(flexpin4);
  
  servoposition1 = map(flexposition1, 113, 355, 0, 170);
  servoposition1 = constrain(servoposition1, 0, 170);
  servoposition2 = map(flexposition2, 157, 417, 0, 170);
  servoposition2 = constrain(servoposition2, 0, 170);
  servoposition3 = map(flexposition3, 196, 451, 10, 170);
  servoposition3 = constrain(servoposition3, 10, 170);
  servoposition4 = map(flexposition4, 140, 442, 0, 170);
  servoposition4 = constrain(servoposition4, 0,170);


  delay(20);
  servo1.write(servoposition1);
  delay(20);
  servo2.write(servoposition2);
  delay(20);
  servo3.write(servoposition3);
  delay(20);
  servo4.write(servoposition4);
  delay(20);
  
  Serial.print("sensor1: ");
  Serial.print(flexposition1);
  Serial.print("  servo1: ");
  Serial.println(servoposition1);
  //delay(20);
  Serial.print("sensor2: ");
  Serial.print(flexposition2);
  Serial.print("  servo2: ");
  Serial.println(servoposition2);
  delay(20);
  Serial.print("sensor3: ");
  Serial.print(flexposition3);
  Serial.print("  servo3: ");
  Serial.println(servoposition3);
  delay(20);
  Serial.print("sensor4: ");
  Serial.print(flexposition4);
  Serial.print("  servo4: ");
  Serial.println(servoposition4);
  delay(20);
} 
