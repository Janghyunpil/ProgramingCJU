#include <stdio.h>
struct cracker
{
	int price;
	int calories;
};
int main()
{
	struct cracker basasak;
	printf("�ٻ���� ���ݰ� Į�θ��� �Է��ϼ��� : ");
	scanf_s("%d %d", &basasak.price, &basasak.calories);
	printf("�ٻ�� ���� : %d", basasak.price);
	printf("�ٻ�� Į�θ� : %d", basasak.calories);
	return 0;
}