#include <stdio.h>
int rec_func(int n);
int main()
{
	int sum = rec_func(1);
	printf("%d", sum);
}
int rec_func(int n) {
	if (n == 10) return ;
	rec_func(n + 1);
}