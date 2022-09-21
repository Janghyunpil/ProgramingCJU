#include <stdio.h>
int main(void)
{
	char ch;										// ch변수 생성

	printf("input charater:\n");					// "inpur character:" 출력

	scanf_s("%c", &ch);								// ch변수에 scanf로 입력해줌

	printf("your inpur:%c\n", ch);					// 입력된 ch함수를 %c를 이용해 "your inpur : 입력값"을 출력

	printf("your input to ascii code:%d\n", ch);	// 입력된 ch함수를 %d를 이용해 숫자로 변환후 "your input to ascii code : 입력값"을 출력

	return 0;
}