#include <stdio.h>
int main()
{
	int i = 0,j=0;
	printf("단수를 입력해주세요\n");
	scanf_s("%d", &j);
	for (i = 1; i < 10; i++) 
	{
		printf("%d * %d = %d\n", j, i, i * j);
	}
	return 0;
}