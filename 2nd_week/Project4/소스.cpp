#include <stdio.h>

#define BMILOW 20			// bmi최솟값 지정
#define BMIHIGH 25			// bmii최대값 지정
#define CM2M 0.01			// cm를 m로 전환하는 함수 생성

int main(void)
{
	double height = 0.0, weight = 0.0, bmi = 0.0;			// 키,몸무게,bmi함수 생성

	printf("input info (weight,height):");				

	scanf_s("%lf%lf", &weight, &height);					// 키,몸무게 함수에 값을 지정

	bmi = weight / ((height * CM2M) * (height * CM2M));		// bmi 값 계산

	printf("BMI result : %.4lf\n", bmi);					// bmi 결과 출력

	printf("your status :");

	((bmi > BMILOW) && (bmi < BMIHIGH)) ? printf("Normal\n") : printf("Need to diet or Gain Weight\n");		// bmi가 최대,최소 값 사이에 있으면 Normal아니면 Need to diet or Gain Weight 출력

	return 0;
}