#include <stdio.h>
#include <stdlib.h>

#define N_PRIMENUMBER 'X'
int main()
{
	int *pi;
	int size = 5;
	int count = 0;
	int num;
	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요.");
		scanf_s("%d", &num);
		if(num <= 0) break;
		if (size == count) 
		{
			size += 5;
			pi = (int*)realloc(pi, size*sizeof(int));
		}
		pi[count++] = num;
	}
	for (int i = 0; i < count; i++)
	{
		for (int j = 2; j < pi[i]; j++)
		{
			if (pi[i] % j == 0)
			{
				pi[i] = 0;
			}
		}
		if (i % 5 == 0) printf("\n");
		if (pi[i] == 0) {
			printf("%5c", N_PRIMENUMBER);

		}
		else printf("%5d", pi[i]);;
	}
	return 0;
}