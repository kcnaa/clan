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
	int data[5] = {3, 5, 2, 999, 999};
	
	printf("Original data : ");
	printList(data, 5);
	printf("\n");
	
	insertionSort(data, 5);
	printf("Sorted data : ");
	printList(data, 5);
}
