#include <stdio.h>
int main()
{
	int A = 0, B = 0, E = 0;
	char Ch;
	printf("������ �Է����ּ��� ");
	scanf_s("%d %c %d", &A, &Ch, 1, &B);
	if(Ch=='+')
	{
		E = A + B;
	}
	else if (Ch == '-') 
	{
		E = A - B;
	}
	else if (Ch == '*')
	{
		E = A * B;
	}
	else if (Ch == '/')
	{
		E = A / B;
	}
	printf("����� : %d", E);
	return 0;
}