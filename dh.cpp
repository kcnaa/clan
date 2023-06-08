#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	//below are public constants in DH
	int g = 7;
	int p = 31;
	
	//below are private key, which belong to A and B respectively 
	int a = 6;
	int b = 15;
	
	// the password is made from g, p, a, b
	int ciphertextA = dhIn(g, p, a);
	int ciphertextB = dhIn(g, p, b);
	printf("%d, %d \n", ciphertextA, ciphertextB);
	
	int passwordA = dhOut(ciphertextB, p, a);
	int passwordB = dhOut(ciphertextA, p ,b);
	
	printf("%d, %d", passwordA, passwordB);
}
