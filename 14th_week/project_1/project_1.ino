// C++ code
//
#include <Servo.h>

#define nRedpin 2
#define nBluepin 3
#define nPushSwPin 4
#define nDelay 100
#define MINANALOG 0
#define MAXANALOG 1023
#define MINDEGREE 0
#define MAXDEGREE 180

Servo myservo;

int P[]={nRedpin,nBluepin,nPushSwPin,nDelay};
int *p=P;

void GenLEDOutPut(int x,int y,int z)
{
  digitalWrite(x,y);
  delay(z);
}

void setup()
{
  myservo.attach(8);
  pinMode(*(p+0), OUTPUT);
  pinMode(*(p+1), OUTPUT);
  pinMode(*(p+3), INPUT);
  Serial.begin(9600);
}

void loop()
{
 if(digitalRead(*(p+2)) == HIGH)
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
     GenLEDOutPut(*(p+0),HIGH,*(p+3));
     GenLEDOutPut(*(p+0),LOW,*(p+3));
   } 
   else
   {     
     GenLEDOutPut(*(p+1),HIGH,*(p+3));
     GenLEDOutPut(*(P+1),LOW,*(p+3));
   }
 }
  else
  {
    Serial.print("Switch:OFF\n");
    GenLEDOutPut(*(p+0),LOW,*(p+3));
    GenLEDOutPut(*(p+1),LOW,*(p+3));
  }
}
