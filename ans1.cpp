#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numBox[5] = {3,4,6,8,9};
	int firstPrint = 1;
	int result;
	int count = 0;
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
					if(firstPrint == 1)
					{
						printf("%d",result);
						firstPrint = 0;
					}
					else
					{
						printf(",%d",result);
					}
					count++;
				}
			}
		}
	}
	printf("\nTotal:%d",count);
} 
