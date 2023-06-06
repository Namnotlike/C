#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const float PI = 3.14;
	float r, s;
	printf("Input the value of r: ");
    scanf("%f", &r);
	s = PI * r * r;
	printf("The area of circle (%.2f) is %.3f\n", r, s );
	return 0;
}