#include <stdio.h>
int main(void)
{
	char ch;										// ch���� ����

	printf("input charater:\n");					// "inpur character:" ���

	scanf_s("%c", &ch);								// ch������ scanf�� �Է�����

	printf("your inpur:%c\n", ch);					// �Էµ� ch�Լ��� %c�� �̿��� "your inpur : �Է°�"�� ���

	printf("your input to ascii code:%d\n", ch);	// �Էµ� ch�Լ��� %d�� �̿��� ���ڷ� ��ȯ�� "your input to ascii code : �Է°�"�� ���

	return 0;
}