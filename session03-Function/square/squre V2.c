#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fV1(); 
void fV2(int x);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	fV2();// cos muif cuar hard code, cunwgf  value dua vao
	return 0;
}

void fV1()
{
	int x, y;
	printf("Plesase input an interger to get a d^2\n");
	printf("Input x: ");
	scanf("%d", &x);
	y = x * x;
	printf("The funtion y = f(x) = x^2 is f(%d) = %d\n", x, y);
}

void fV2(int x)
{
	int y = x * x;
	printf("The funtion y = f(x) = x^2 is f(%d) = %d\n", x, y);
}