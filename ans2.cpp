#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[100];
	char str1[100];
	int err = 0;
	printf("String:");
	scanf("%s", str);
	int i = 0;
	for(i = 0; str[i] != '\n'; i++)
	{
		if(65 <= (int)(str[i]) && (int)(str[i]) <= 90)
		{
			str1[i] = (char)(((int)str[i]) + 32 + 1);
		}
		else if(97 <= (int)(str[i]) && (int)(str[i]) <= 122)
		{
			str1[i] = (char)(((int)str[i]) - 32 + 1);
		}
		else
		{
			err = 1;
			break;
		}
	}
	if(err == 0)
	{
		printf("%s", str1);
	}
	else
	{
		printf("Error!");
		printf(str1);
	}
}
