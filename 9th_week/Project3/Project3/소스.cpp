#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#define MAXLENGH 20
int main()
{
	char str1[MAXLENGH];
	char str2[MAXLENGH];
	char str3[MAXLENGH];
	char temp[MAXLENGH];
	printf("세 단어 입력 : ");
	scanf("%s %s %s", str1, str2, str3);
	if ((int)(strcmp(str1, str2)) > 0)
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}
	if ((int)(strcmp(str1, str3)) > 0)
	{
		strcpy(temp, str1);
		strcpy(str1, str3);
		strcpy(str1, temp);
	}
	if ((int)(strcmp(str2, str3)) > 0)
	{
		strcpy(temp, str2);
		strcpy(str2, str3);
		strcpy(str3, temp);
	}
	printf("%s %s %s", str1, str2, str3);
	return 0;
}