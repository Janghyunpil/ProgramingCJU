#include <stdio.h>
#include <string.h>
#pragma warning(disavle:4996)

void add_by_pointer(int* pq, int* qb, int* pr)
{
	*pr = *pq + *qb;
}

int main()
{
	int a = 10, b = 20, res = 0;
	add_by_pointer(&a, &b, &res);
	printf("%d", res);
	return 0;
}