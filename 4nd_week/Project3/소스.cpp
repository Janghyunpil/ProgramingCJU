#include <stdio.h>
int main()
{
	int A=0, B=0, E=0;
	char Ch;
	printf("������ �Է����ּ��� ");
	scanf_s("%d %c %d", &A, &Ch, 1, &B);
	switch (Ch) 
	{
		case '+':
			E = A + B;
			break;
		case '-':
			E = A - B;
			break; 
		case '*':
			E = A * B;
			break; 
		case '/':
			E = A / B;
			break;
	}
	printf("����� : %d", E);
	return 0;
}