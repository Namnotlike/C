#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int max = a;
	if ( b > max )
		max = b;
	if (c > max) 
		max = c;
	printf ("the max number is %d\n", max);
	return 0;
}