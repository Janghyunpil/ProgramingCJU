#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#include <stdio.h>
void main()
{
	FILE* afp, * bfp;
	afp = fopen("yolo_label_data.txt", "ra");
	char abuffer[MAX] = { 0, };
	fread(abuffer, 1, MAX, afp);
	fclose(afp);
	bfp = fopen("yolo_bbox_data.txt", "rb");
	char bbuffer[MAX] = { 0, };
	fread(bbuffer, 1, MAX, bfp);
	fclose(bfp);
}