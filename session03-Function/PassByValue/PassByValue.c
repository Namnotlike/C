#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int pN(int x);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	if (n <= 0)
		printf("n is not prime number\n");
	else	
		pN(n);		
	return 0;
}
int pN(int x)
{
	for(int i = 2; i < x; i++)
		if (x % i == 0)
		{
			printf(" n is not prime number\n");
			return;
		}
	printf("n is prime number ");
	return x;
}
