#include <stdio.h>
int main(void)
{
	int chest=0;
	char size;
	printf("�����ѷ��� �Է����ּ���.\n");
	scanf_s("%d", &chest);
	if (chest <= 90)
	{
		size = 'S';
	}
	else if (90 < chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	printf("your size is %c", size);
	return 0;
}