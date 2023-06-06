#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10, b = 20;
	printf("a = %d, b = %d\n", a, b);
	printf("a add: %u, b add: %u\n", &a, &b);
	a = 69; b = 1;
	printf("a = %d\nb = %d\n", a, b);
	double c = 0.1, d;
	d = 3.14;
	printf("c = %.2lf, d = %.2lf\n", c, d);
	printf("c add: %u, d add: %u\n", &c, &d);
	int size = sizeof(int);
	printf("size of int: %d\n", size);
	printf("size of double: %d\n", sizeof(double));
	return 0;
}