#include <stdio.h>

#define BMILOW 20			// bmi�ּڰ� ����
#define BMIHIGH 25			// bmii�ִ밪 ����
#define CM2M 0.01			// cm�� m�� ��ȯ�ϴ� �Լ� ����

int main(void)
{
	double height = 0.0, weight = 0.0, bmi = 0.0;			// Ű,������,bmi�Լ� ����

	printf("input info (weight,height):");				

	scanf_s("%lf%lf", &weight, &height);					// Ű,������ �Լ��� ���� ����

	bmi = weight / ((height * CM2M) * (height * CM2M));		// bmi �� ���

	printf("BMI result : %.4lf\n", bmi);					// bmi ��� ���

	printf("your status :");

	((bmi > BMILOW) && (bmi < BMIHIGH)) ? printf("Normal\n") : printf("Need to diet or Gain Weight\n");		// bmi�� �ִ�,�ּ� �� ���̿� ������ Normal�ƴϸ� Need to diet or Gain Weight ���

	return 0;
}