#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a[5] = {4, 56, 33, 9, 100};
	float max = a[0];

	for(int i = 0; i < 5; i++)
		if (*(a + i) > max)
			max = *(a + i);
	printf("%.1f\n", max);
	return 0;
}