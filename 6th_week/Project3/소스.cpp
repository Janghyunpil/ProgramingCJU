#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void printMatrix(int m[][2])
{
	int i, j;
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%5d", m[i][j]);
		}
		if (j == 2) 
		{
			printf("\n");
		}
	}
}

void setMatrix(int m[][2])
{
	GenRandSeed();
	int i, j;
	int nRange;
	printf("랜덤값의 최대치를 입력해주세요 : ");
	scanf_s("%d", &nRange);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			m[i][j] = GenRandNum(nRange);
		}
	}
}

void calcMAtrix(int a[][2], int b[][2], int c[][2])
{
	int k, temp;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			temp = 0;
			for (k = 0; k < 2; k++)
			{
				temp += (a[i][k] * b[k][j]);
			}
			c[i][j] = temp;
		}
	}
}

int main(void)
{
	int MA[2][2] = { 0 };
	int MB[2][2] = { 0 };
	int MC[2][2] = { 0 };
	setMatrix(MA);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			MB[j][i] = MA[j][i];
		}
	}
	printf("mA\n");
	printMatrix(MA);
	printf("mB\n");
	printMatrix(MB);
	calcMAtrix(MA, MB, MC);
	printf("mA * mB \n");
	printMatrix(MC);
	return 0;
}