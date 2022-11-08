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
		printf("clear! 시도 횟수: %d\n",z);
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
		printf("최대값 지정해주세요. ( 만약 그만하시고 싶으시다면 %d를 입력해주세요 ) : ",ENDCODE);
		scanf_s("%d", &nRange);
		
		//게임 종료 여부 확인
		if (nRange == ENDCODE)
		{
			printf("게임을 종료합니다.");
			break;
		}

		// 랜덤값 생성
		int nRes = GenRandNum(nRange);

		// 게임 시작
		for (int i = 0; i < COUNT; i++)
		{
			printf("예상값을 입력해주세요 : ");
			scanf_s("%d", &est_value);
			counter = Up_Down(est_value, nRes, counter);

			if (est_value == nRes)
			{
				//성공횟수 계산
				*(pa + W_COUNT) += 1;
				//시도횟수 초기화
				counter = 0;
				break;
			}
		}

		//실패횟수 계산
		if (est_value != nRes) {
			*(pa + L_COUNT) += 1;

			//이어서 도전 여부확인
			printf("이어서 도전하시겠습니까? ( yes(%d) or no(%d))\n", RETRY_O, RETRY_X);
			scanf_s("%d", &retry);

			if (retry == 0)
			{
				while (est_value != nRes)
				{
					printf("예상값을 입력해주세요 : ");
					scanf_s("%d", &est_value);
					counter = Up_Down(est_value, nRes, counter);

					if (est_value == nRes)
					{
						counter = 0;
					}
				}
			}
			else printf("실패! 처음으로 돌아갑니다.\n");
		}
	}

	printf("승점\n성공 : %d 실패 : %d", *(pa + W_COUNT), *(pa + L_COUNT));
	return 0;
}