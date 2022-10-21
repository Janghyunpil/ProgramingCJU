#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_COUNT 5

int AVG(double x);
int VAR(double x);
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

int AVG(double x)
{
	double avg = 0;
	avg = x / MAX_COUNT;
	return avg;
}

int VAR(double x)
{
	double var = 0;
	var = x / MAX_COUNT;
	return var;
}

int main(void)
{
	GenRandSeed();
	int i, j;
	int num[MAX_COUNT];
	int nRange = 0;
	double  sum = 0, avg = 0, var = 0, dev = 0, std = 0;
	printf("Input a single number, for generating the random number related to your input:\n");
	scanf_s("%d", &nRange);
	for ( i = 0; i < MAX_COUNT;i++)
	{
		int nRes = GenRandNum(nRange);
		num[i] = nRes;
		sum = sum + num[i];
	}
	avg = AVG(sum);
	for ( j = 0; j < MAX_COUNT; j++)
	{
		dev =dev + ((num[j] - avg)* (num[j] - avg));
	}
	var = VAR(dev);
	std = sqrt(var);
	printf("your number :%d %d %d %d %d\n",num[0], num[1], num[2], num[3], num[4]);
	printf("averge:%.3f\n",avg);
	printf("variation:%.3f\n",var);
	printf("nstandard deviation:%.3f",std);
	return 0;
}

