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

int P[]={nRedpin,nBluepin,nPushSwPin,nDelay}; //배열,포인터 생성
int *p=P;

void GenLEDOutPut(int x,int y,int z)
{
  digitalWrite(x,y);
  delay(z);
}

void setup()
{
  myservo.attach(8);  //서보모터를 8번으로 초기화
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
   
   int readValue = analogRead(A0); //  가변저항 값 읽어오기
   Serial.println(readValue); 
   int a = map(readValue,MINANALOG,MAXANALOG,MINDEGREE,MAXDEGREE);  //가변저항 값을 원하는 범위 내의 값으로 재지정
   for(int i = 0;i<a;i++)    //서보모터 각도 조절
   {
     myservo.write(i);   
   }
   
   if(a<=90)    //서보모터 각도가 90도 이하일 때 빨간 불이 들어오고 아니면 파란불이 들어오도록 설정
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
  else          // 스위치가 꺼져있다면 모든 LED off
  {
    Serial.print("Switch:OFF\n");
    GenLEDOutPut(*(p+0),LOW,*(p+3));
    GenLEDOutPut(*(p+1),LOW,*(p+3));
  }
}
