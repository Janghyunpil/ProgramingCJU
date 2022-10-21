#include <stdio.h>
int main()
{
	int age = 0, chest = 0;
	char size;
	printf("나이와 가슴둘레를 입력해주세요. ");
	scanf_s("%d%d", &age, &chest);
	if (age < 20)
	{
		if (chest <= 85)
		{
			size = 'A';
		}
		else if (85 < chest <= 95)
		{
			size = 'B';
		}
		else if (chest > 95)
		{
			size = 'c';
		}
	}
	else
	{
		if (chest <= 90)
		{
			size = 'A';
		}
		else if (90 < chest <= 100)
		{
			size = 'B';
		}
		else if (chest > 100)
		{
			size = 'c';
		}
	}
	printf("your chest size is %c", size);
	return 0;
}