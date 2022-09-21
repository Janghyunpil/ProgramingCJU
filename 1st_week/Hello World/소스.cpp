#include <stdio.h>
int main(void)                         //50p 3번
{
	printf("hello worid\n");
	return 0;
}

/*
int main(void)                         //50p 3번
{
	printf("학번:%d\n", 2019010712);
	printf("이름:%s\n", "장현필");
	printf("학점:%c\n", 'A');
	return 0;
}


int main(void)               //82p  3번
{
	char ch;
	printf("input charater:\n");
	scanf_s("%c", &ch);
	printf("your inpur:%c\n", ch);
	printf("your input to ascii code:%d\n", ch);
	return 0;
}



#define NUM 3			        //99p 3번
#define EV 10
#define MIN 4.0
int main(void)
{
	int kor = 3, eng = 5, mat = 4;
	int credits = kor + eng + mat;
	double kor1 = 3.8, eng1 = 4.4, mat1 = 3.9;
	double Grade = (kor1 + eng1 + mat1) / ((double)(NUM));
	int res = ((credits > EV) && (Grade > MIN)) ? 1 : 0;
	printf("Taehee's status(grade,score):(%d,%.4lf)\n", credits, Grade);
	printf("Taehee's resurt status:(%d)\n", res);
	return 0;
}



#define BMILOW 20				//120p 도전실전예제
#define BMIHIGH 25
#define CM2M 0.01
int main(void)
{
	double height = 0.0, weight = 0.0, bmi = 0.0;
	printf("input info (weight,height):");
	scanf_s("%lf%lf", &weight, &height);
	bmi = weight / ((height * CM2M) * (height * CM2M));
	printf("BMI result : %.4lf\n", bmi);
	printf("your status :");
	((bmi > BMILOW) && (bmi < BMIHIGH)) ? printf("Normal\n") : printf("Need to diet or Gain Weight\n");
	return 0;
}*/