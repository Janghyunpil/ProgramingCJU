#include <stdio.h>

#define DIGITs 4

int COUNT(int x, int y) 
{
	int count = 0;
	if (x == y) count = 1;
	return count;
}

int main()
{
	int i, j;
	int count = 0;
	int PW[DIGITs];
	int nPW[DIGITs];

	printf("Please register your password.\n");

	for (i = 0; i < DIGITs; i++)
	{
		scanf_s("%d", &PW[i]);
	}

	while (count < DIGITs)
	{
		printf("Please enter your password.\n");
		for (j = 0; j < DIGITs; j++)
		{
			scanf_s("%d", &nPW[j]);
			count += COUNT(PW[j], nPW[j]);
		}
		if (count == DIGITs)
		{
			printf("normal termination\n");
		}
		else 
		{
			count = 0;
			printf("not matched, retry\n");

		}
	}
	return 0;
}


