#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main()
{
    FILE *fp = fopen("project.txt", "w");
    //?
    fclose(fp);
    return 0;
}