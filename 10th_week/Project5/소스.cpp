#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;
struct train
{
	int seats;
	Train* next;
};
int main()
{
	Train* head = NULL, * tail = NULL;
		for(int i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
		}
		else
		{
			tail -> next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
	}
	return 0;
}