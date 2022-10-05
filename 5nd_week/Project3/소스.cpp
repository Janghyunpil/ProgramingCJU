#include <stdio.h>
int ADD(int x, int y);
int SUB(int x, int y);
int MUL(int x, int y);
int DIV(int x, int y);
int main()
{
	int A = 0, B = 0, E = 0;
	char Ch;
	printf("수식을 입력해주세요 ");
	scanf_s("%d %c %d", &A, &Ch, 1, &B);
	if (Ch == '+')
	{
		E = ADD(A,B);
	}
	else if (Ch == '-')
	{
		E = SUB(A, B);
	}
	else if (Ch == '*')
	{
		E = MUL(A, B);
	}
	else if (Ch == '/')
	{
		E = DIV(A, B);
	}
	printf("결과값 : %d", E);
	return 0;
}
int ADD(int x, int y) 
{
	int Res;
	Res = x + y;
	return Res;
}
int SUB(int x, int y)
{
	int Res;
	Res = x - y;
	return Res;
}
int MUL(int x, int y)
{
	int Res;
	Res = x * y;
	return Res;
}
int DIV(int x, int y)
{
	int Res;
	Res = x / y;
	return Res;
}