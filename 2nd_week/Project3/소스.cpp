#include <stdio.h>

#define NUM 3		//����� ����
#define EV 10		//�ּ� ��û���� ����
#define MIN 4.0		//�ּ� ������� ����

int main(void)
{
	int kor = 3, eng = 5, mat = 4;											// �����Լ��� �� ���� ���� ����

	int credits = kor + eng + mat;											// �����Լ��� ���� ������ �� ����

	double kor1 = 3.8, eng1 = 4.4, mat1 = 3.9;								// �Ǽ��Լ��� ���� ����

	double Grade = (kor1 + eng1 + mat1) / ((double)(NUM));					// �Ǽ��Լ��� ���� ���� ���, NUM�Լ��� �Ǽ��Լ��� ��ȯ�ؼ� ���

	int res = ((credits > EV) && (Grade > MIN)) ? 1 : 0;					// credits > NUM , Grade > MIN�� ��� ��ġ�ϸ� 1 �ƴϸ� 0���� res�Լ��� ����

	printf("Taehee's status(grade,score):(%d,%.4lf)\n", credits, Grade);	// ���� �հ� ��� ������ ���

	printf("Taehee's resurt status:(%d)\n", res);							// res�Լ��� ���

	return 0;
}