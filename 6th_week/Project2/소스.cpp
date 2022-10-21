#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define END_COND 999

void GenRandSeed()
{
	srand((unsigned int)(time(NULL)));
	return;
}
unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}

int main(void)
{
	GenRandSeed();

	int nRange = 0;

	while (1)
	{
		printf("Input a single number, for generating the random number related to your input:\n");
		printf("if you want to end the loop, please input 999\n");
		scanf_s("%d", &nRange);

		if (nRange == END_COND)
		{
			printf("end of the infinite while loop...\n");
			break;
		}
		else
		{
			int nRes = GenRandNum(nRange);
			printf("Result:random number generator, %d\n\n", nRes);
		}
	}

	system("pause");
	return 0;
}
 int avg()