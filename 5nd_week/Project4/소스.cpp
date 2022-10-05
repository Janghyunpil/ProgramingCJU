#include <stdio.h>
int rec_sum(int n);
int main(void)
{
    int res;
    res = rec_sum(1);
    printf("result : %d\n", res);
    return 0;
}

int rec_sum(int n)
{
    if (n == 10) return 10;
    else return (n + rec_sum(n + 1));
}