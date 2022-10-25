#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANGTH 10

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

void asc_Order(int a[])
{
	int temp;
	for (int i = 0; i < LANGTH; i++)
	{
		for (int j = 0; j < LANGTH; j++)
		{
			if (*(a + j) > *(a + j+1))
			{
				temp = *(a + j);
				*(a + j) = *(a + j+1);
				*(a + j+1) = temp;
			}
		}
	}
	printf("�������� :");
	for (int k = 1; k <= LANGTH; k++) printf("%d ", *(a + k));
	printf("\n");
}

void des_Order(int a[])
{
	int temp;
	for (int i = 0; i < LANGTH; i++)
	{
		for (int j = 0; j + i < LANGTH; j++)
		{
			if (*(a + j) < *(a + j + 1))
			{
				temp = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = temp;
			}
		}
	}
	printf("�������� :");
	for (int k = 0; k < LANGTH; k++) printf("%d ", *(a+k));
	printf("\n");
}

int main(void)
{
	GenRandSeed();
	int nRange = 0;
	int array[LANGTH] ;
	printf("�Է¹��� ������ �ִ밪�� �Է����ּ���.");
	scanf_s("%d", &nRange);
	printf("�Էµ� ���� : ");
	for (int i = 0; i < LANGTH; i++)
	{
		array[i] = GenRandNum(nRange);
		printf("%d ",array[i]);
	}
	printf("\n");
	asc_Order(array);
	des_Order(array);
	return 0;
}