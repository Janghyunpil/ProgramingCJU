#include <stdio.h>
 
void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main()
{
	input_data(&a,&b);
	swap_data();
	print_data(a,b);
}

void input_data(int *pa, int *pb)
{
	printf("�� ���� �Է� : ");
	scanf_s("%d%d", pa, pb);
}
void swap_data(void)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}
void print_data(int a, int b)
{
	printf("�� ���� ��� : %d, %d", a, b);
}
