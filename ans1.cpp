#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numBox[5] = {3,4,6,8,9};
	int result;
	int i = 0;
	int j = 0;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(i == j)
			{
				continue;
			}
			else
			{
				result = numBox[i] * 10 + numBox[j];
				if(result >= 90)
				{
					continue;
				}
				else
				{
					printf("%d\n",result);
				}
			}
		}
	}
} 
