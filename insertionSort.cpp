#include<stdio.h>
#include<stdlib.h>

void insertionSort(int list[], int len)
{
	int temp;
	int vacancy;
	for(int i = 1; i < len; i++)
	{
		temp = list[i];
		vacancy = i;
		while(list[vacancy - 1] > temp && vacancy != 0)//not in order
		{
			list[vacancy] = list[vacancy - 1];
			vacancy--;
		}
		list[vacancy] = temp;
	}
}

void printList(int list[], int len) 
{
	int end = 0;
	for(int i = 0; i < len; i++)
	{
		printf("%d", list[i]);
		if(i != len - 1)
		{
			printf(", ");
		}
	}
}

int main()
{
	int list[5] = {2, 4, 3, 1, 5};
	int *ptr = list - 1;
	*ptr = -9;
	insertionSort(list, 5);
	printList(list, 5);
}
