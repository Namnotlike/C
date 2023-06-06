#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tt = 5;
	int *hr = &tt;
	tt -= 1;
	*hr -= 1;
	hr -= 4;
	printf ("%d\n", tt);
	printf ("%d\n", hr);
	printf ("%d\n", &tt);
	printf ("%d\n", *hr);
	return 0;
}