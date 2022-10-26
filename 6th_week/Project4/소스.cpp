#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10

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
	for (int i = 0; i < LENGTH; i++)
	{
		for (int j = 0; j < LENGTH; j++)
		{
			if (*(a + i) > *(a + j))
			{
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
	printf("�������� :");
	for (int k = 0; k < LENGTH; k++) printf("%d ", *(a + k));
	printf("\n");
}

void des_Order(int a[])
{
	int temp;
	for (int i = 0; i < LENGTH; i++)
	{
		for (int j = 0; j  < LENGTH; j++)
		{
			if (*(a + i) < *(a + j ))
			{
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
	printf("�������� :");
	for (int k = 0; k < LENGTH; k++) printf("%d ", *(a+k));
	printf("\n");
}

int main(void)
{
	GenRandSeed();
	int nRange = 0;
	int array[LENGTH] ;
	printf("�Է¹��� ������ �ִ밪�� �Է����ּ���.");
	scanf_s("%d", &nRange);
	printf("�Էµ� ���� : ");
	for (int i = 0; i < LENGTH; i++)
	{
		array[i] = GenRandNum(nRange);
		printf("%d ",array[i]);
	}
	printf("\n");
	asc_Order(array);
	des_Order(array);
	return 0;
}