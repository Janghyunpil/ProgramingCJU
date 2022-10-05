#include <stdio.h>
#define MIN 2
int main()
{
	int num;
	printf("숫자를 입력해주세요\n");
	scanf_s("%d", &num);
	int divsize=1;
	int counter=1;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				divsize = divsize + 1;
			}
		}
	if (divsize == 2)
		{
			printf("%d	", i);
			counter = counter + 1;
		}
	
	if (counter == 5)
		{
			counter = 1;
			printf("\n");
		}	
	divsize = 1;
	}
	return 0;
}
