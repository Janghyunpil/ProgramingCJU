#include <stdio.h>
int main()
{
	int A=0, B=0, E=0;
	char Ch;
	printf("수식을 입력해주세요 ");
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
	printf("결과값 : %d", E);
	return 0;
}