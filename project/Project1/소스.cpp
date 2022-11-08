#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ENDCODE 999
#define COUNT 5
#define W_COUNT 0
#define L_COUNT 1
#define RETRY_O 0
#define RETRY_X 1

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
int Up_Down(int x, int y,int z)
{
	++z;
	if (x > y) 
	{
		printf("down\n");
	}
	else if(x < y)
	{
		printf("up\n");
	}
	else
	{
		printf("clear! �õ� Ƚ��: %d\n",z);
	}
	return z;
}



int main(void)
{
	GenRandSeed();
	int nRange=0, counter = 0, restart = 0,retry=0;
	int est_value=0;
	int ary[2] = { 0,0 };
	int* pa = ary;

	
	while(1)
	{
		printf("�ִ밪 �������ּ���. ( ���� �׸��Ͻð� �����ôٸ� %d�� �Է����ּ��� ) : ",ENDCODE);
		scanf_s("%d", &nRange);
		
		//���� ���� ���� Ȯ��
		if (nRange == ENDCODE)
		{
			printf("������ �����մϴ�.");
			break;
		}

		// ������ ����
		int nRes = GenRandNum(nRange);

		// ���� ����
		for (int i = 0; i < COUNT; i++)
		{
			printf("������ �Է����ּ��� : ");
			scanf_s("%d", &est_value);
			counter = Up_Down(est_value, nRes, counter);

			if (est_value == nRes)
			{
				//����Ƚ�� ���
				*(pa + W_COUNT) += 1;
				//�õ�Ƚ�� �ʱ�ȭ
				counter = 0;
				break;
			}
		}

		//����Ƚ�� ���
		if (est_value != nRes) {
			*(pa + L_COUNT) += 1;

			//�̾ ���� ����Ȯ��
			printf("�̾ �����Ͻðڽ��ϱ�? ( yes(%d) or no(%d))\n", RETRY_O, RETRY_X);
			scanf_s("%d", &retry);

			if (retry == 0)
			{
				while (est_value != nRes)
				{
					printf("������ �Է����ּ��� : ");
					scanf_s("%d", &est_value);
					counter = Up_Down(est_value, nRes, counter);

					if (est_value == nRes)
					{
						counter = 0;
					}
				}
			}
			else printf("����! ó������ ���ư��ϴ�.\n");
		}
	}

	printf("����\n���� : %d ���� : %d", *(pa + W_COUNT), *(pa + L_COUNT));
	return 0;
}