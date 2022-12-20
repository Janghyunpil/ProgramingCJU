// C++ code
//
#define unit_Coversion 58 // 초음파 센서의 값 in를 cm단위로 변환하는 값
#define Three_M 300
#define One_M 100
#define TRIG 2
#define ECHO 3
#define SPEAKER 4
#define SWITCH 5

int P[]={TRIG,ECHO,SPEAKER,SWITCH};
int *p=P;
int distance;
void Sound_Output(int x,int Hz,int nDelay)
{
  tone(x,Hz);
  delay(100);
  noTone(x);
  delay(nDelay);
}

void setup()
{
  Serial.begin(9600);
  pinMode(*p,OUTPUT);
  pinMode(*(p+1),INPUT);
  pinMode(*(p+2),OUTPUT);
  pinMode(*(p+3),INPUT);
}

void loop()
{
  digitalWrite(*(p+1),LOW);                 
  delay(2);                                    
  digitalWrite(*(p+1),HIGH);                
  delay(10);
  digitalWrite(*(p+1),LOW);
  int readValue = digitalRead(*(p+3));
  if(readValue == HIGH)
  {
    Serial.print("Switch:ON\n");
    distance = pulseIn(*(p+1),HIGH)/unit_Coversion;
    if(distance <= Three_M)
    {
     if(distance <= One_M)
     {
      distance = distance/10;
      Sound_Output(*(p+2),500,distance);
     }
     else
     {
      Sound_Output(*(p+2),500,distance);
     }
     Serial.println(distance);
    }
  }else Serial.print("Switch:OFF\n");  
  delay(50);
}
