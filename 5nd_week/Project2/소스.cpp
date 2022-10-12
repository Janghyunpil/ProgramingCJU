#include <stdio.h>
#define MIN 2
#define CMAX 5
int main()
{
	int num;
	printf("숫자를 입력해주세요\n");
	scanf_s("%d", &num);
	int divsize=0;
	int counter=0;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				divsize = divsize + 1;
			}
		}
	if (divsize == MIN)
		{
			printf("%d	", i);
			counter = counter + 1;
		}
	
	if (counter == CMAX)
		{
			counter = 0;
			printf("\n");
		}	
	divsize = 0;
	}
	return 0;
}
