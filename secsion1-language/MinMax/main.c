#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if ( a > b )
		if ( a > c )
			printf("a is a max number = %.2f\n", a);
		else if (a == c)
			printf("a and c are equal and max = %.2f\n", a);
		else 
			printf("c is max number = %.2f\n", c);
	else if ( a == b )
		if ( a > c )
			printf("a and b is a max number = %.2f\n", a);
		else if (a == c)
			printf("a and b and c are equal and max = %.2f\n", a);
		else 
			printf("c is max number = %.2f\n", c);
	else
		if ( b > c )
			printf("b is a max number = %.2f\n", b);
		else if (b == c)
			printf("b and c are equal and max = %.2f\n", b);
		else 
			printf("c is max number = %.2f\n", c);
	return 0;
}