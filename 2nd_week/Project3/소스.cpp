#include <stdio.h>

#define NUM 3		//과목수 지정
#define EV 10		//최소 신청학점 지정
#define MIN 4.0		//최소 평균평점 지정

int main(void)
{
	int kor = 3, eng = 5, mat = 4;											// 정수함수에 각 과목 학점 지정

	int credits = kor + eng + mat;											// 정수함수에 과목 학점의 합 지정

	double kor1 = 3.8, eng1 = 4.4, mat1 = 3.9;								// 실수함수에 평점 지정

	double Grade = (kor1 + eng1 + mat1) / ((double)(NUM));					// 실수함수에 과목 평점 계산, NUM함수를 실수함수로 변환해서 계산

	int res = ((credits > EV) && (Grade > MIN)) ? 1 : 0;					// credits > NUM , Grade > MIN이 모두 일치하면 1 아니면 0으로 res함수에 지정

	printf("Taehee's status(grade,score):(%d,%.4lf)\n", credits, Grade);	// 학점 합과 평균 평점을 출력

	printf("Taehee's resurt status:(%d)\n", res);							// res함수를 출력

	return 0;
}