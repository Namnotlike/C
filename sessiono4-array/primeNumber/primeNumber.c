#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int isPrime(int n);
void printPrimeList(int a[], int size);
int main(int argc, char *argv[]) {
	int a[5];
	printPrimeList(a, 5);
	return 0;
}

int isPrime(int n)
{	
	for(int i = 2; i < (n/2 + 1); i++)
		if((n%i) == 0)
			return 0;	
	return 1;
			
}

void printPrimeList(int a[], int size)
{
	for(int i = 0; i < size; i++)
		scanf("%d", (a + i));
	for(int i = 0; i < size; i++)
		if (isPrime(*(a + i)) != 0)
			printf("a[%d] = %d\n", i + 1, *(a + i));	
}