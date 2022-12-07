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
  myservo.attach(8); //서보모터를 8로 초기화
  pinMode(nRedPin, OUTPUT);
  pinMode(nBluePin, OUTPUT);
  pinMode(nPushSwPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
 if(digitalRead(nPushSwPin) == HIGH) //스위치 on off 여부 확인
 {
   Serial.print("Switch:ON\n");
   
   int readValue = analogRead(A0);
   Serial.println(readValue);         //가변저항 값 읽어오기
   int a = map(readValue,MINANALOG,MAXANALOG,MINDEGREE,MAXDEGREE);   //가변저항값의 범위를 원하는 각도값의 범위로 변경
   
   for(int i = 0;i<a;i++)       //입력받은 각도로 서보모터를 회전
   {
     myservo.write(i);
   }
   
   if(a<=90)      //서보모터가 90도 이하일 경우 빨간 불이 아닐경우 파란불이 깜박거리게 설정했습니다.
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
  else          // 스위치가 꺼져있는경우 모든 LED 끄기
  {
    Serial.print("Switch:OFF\n");
    GenLEDOutPut(nRedPin,LOW);
    GenLEDOutPut(nBluePin,LOW);
  }
}
