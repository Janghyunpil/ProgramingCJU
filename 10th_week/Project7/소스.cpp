#include < stdio.h>
#include < stdlib.h>
#include < string.h>

typedef struct
{
	char name[20];
	int num,kor, eng, mat,tot;
	double avg;
	char grade;
} Student;

void input_data(Student* pary)
{
	for (int i = 0; i < 5; i++)
	{
		printf("> 학번 : ");
		scanf_s("%d", &pary->num);
		printf("> 이름 : ");
		scanf_s("%s", &pary->name,3);
		printf("> 국어,영어,수학점수 : ");
		scanf_s("%d%d%d", &pary->kor, &pary->eng, &pary->mat);
		pary++;
	}
}

void calc_data(Student* pary)
{
	for (int i = 0; i < 5; i++)
	{
		pary->tot = pary->kor + pary->eng + pary->mat;
		pary->avg = pary->tot / 3.0;
		if (pary->avg >= 90.0) pary->grade = 'A';
		else if (pary->avg >= 80.0) pary->grade = 'B';
		else if (pary->avg >= 70.0) pary->grade = 'C';
		else pary->grade = 'F';
		pary++;
	}
}

void sort_data(Student* pary)
{
	Student temp;
	int max;
	for (int i = 0; i < 4; i++)
	{
		max = i;
		for (int j = i+1; j < 5; j++)
		{
			if (pary[max].tot < pary[j].tot)
			{
				max = j;
			}
		}
		if(max != i)
		{
			temp = pary[max];
			pary[max] = pary[i];
			pary[i] = temp;
		}
	}
}

void print_data(Student* pary)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%5d%7s%5d%5d%5d%5d%7.1lf%5c\n",pary->num, pary->name, pary->kor, pary->eng,pary->mat, pary->tot, pary->avg, pary->grade);
		pary++;
	}
}

int main()
{
	Student ary[5];
	input_data(ary);
	calc_data(ary);
	printf("#정렬 전 데이터\n");
	print_data(ary);
	sort_data(ary);
	printf("#정렬 후 데이터\n");
	print_data(ary);
	
	return 0;
}