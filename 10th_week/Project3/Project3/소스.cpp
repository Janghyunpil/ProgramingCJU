#include <stdio.h>
struct cracker
{
	int price;
	int calories;
};
int main()
{
	struct cracker basasak;
	printf("바사삭의 가격과 칼로리를 입력하세요 : ");
	scanf_s("%d %d", &basasak.price, &basasak.calories);
	printf("바사삭 가격 : %d", basasak.price);
	printf("바사삭 칼로리 : %d", basasak.calories);
	return 0;
}