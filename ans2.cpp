#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
			printf(",");
		}
	}
}

int dhIn(long long g, long long p, long long priKey)
{
	int ciphertext = (long long)pow(g, priKey) % p;
	return ciphertext;
}

int dhOut(long long ciphertext, long long p, long long priKey)
{
	int password = (long long)pow(ciphertext, priKey) % p;
	return password;
}

int main()
{
	int g, p, a, b;
	printf("Input g, p, a, b? ");
	scanf("%d %d %d %d", &g, &p, &a, &b);
	
	// the password is made from g, p, a, b
	int ciphertextA = dhIn(g, p, a);
	int ciphertextB = dhIn(g, p, b);

	printf("A: %d\n", ciphertextA);
	printf("B: %d\n", ciphertextB);
	
	int passwordA = dhOut(ciphertextB, p, a);
	int passwordB = dhOut(ciphertextA, p ,b);
	
	printf("Password: %d\n\n", passwordA);
	
	int data[5] = {2, 3, 5, 999, 999};
	data[4] = passwordA;
	insertionSort(data, 5);
	printList(data, 5);
}
