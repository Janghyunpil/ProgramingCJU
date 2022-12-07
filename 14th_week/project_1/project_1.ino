// C++ code
//
#include <Servo.h>

#define MINANALOG 0
#define MAXANALOG 1023
#define MINDEGREE 0
#define MAXDEGREE 180

Servo myservo;

int nRedPin = 2;
int nBluePin = 3;
int nPushSwPin = 4;
int nDelay = 200;

void GenLEDOutPut(int x,int y)
{
  digitalWrite(x,y);
  delay(nDelay);
}

void setup()
{
  myservo.attach(8);
  pinMode(nRedPin, OUTPUT);
  pinMode(nBluePin, OUTPUT);
  pinMode(nPushSwPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
 if(digitalRead(nPushSwPin) == HIGH)
 {
   Serial.print("Switch:ON\n");
   
   int readValue = analogRead(A0);
   Serial.println(readValue);
   int a = map(readValue,MINANALOG,MAXANALOG,MINDEGREE,MAXDEGREE);
   for(int i = 0;i<a;i++)
   {
     myservo.write(i);
   }
   
   if(a<=90)
   {
     GenLEDOutPut(nRedPin,HIGH);
     GenLEDOutPut(nRedPin,LOW);
   } 
   else
   {     
     GenLEDOutPut(nBluePin,HIGH);
     GenLEDOutPut(nBluePin,LOW);
   }
 }
  else
  {
    Serial.print("Switch:OFF\n");
    GenLEDOutPut(nRedPin,LOW);
    GenLEDOutPut(nBluePin,LOW);
  }
}
