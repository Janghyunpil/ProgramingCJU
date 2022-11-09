#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#define REFLENGH 5
#define MAXLENGH 15

int main()
{
	char strInput[MAXLENGH];
	char strOutput[MAXLENGH]="*";
	for (int i = 0; i < MAXLENGH; i++) 
	{
		strcat(strOutput, "*");
	}
	printf("문자열 입력 : ");
	scanf("%s", &strInput, MAXLENGH);
	printf("\n");
	if ((int)(strlen(strInput)) >= REFLENGH)
	{
		for (int j = REFLENGH; j < strlen(strInput); j++)
		{
			strInput[j] = strOutput[j];
		}
		printf("%s", strInput);
	}else
	{
		printf("%s", strInput);
	}
	return 0;
}