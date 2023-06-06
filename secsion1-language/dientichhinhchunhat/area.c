#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int width, length, area;
	printf ("You are required to input the size of a rectangle\n");
	printf("Input your width: ");
	scanf("%d", &width);
	printf("Input your length: ");
	scanf("%d", &length);
	area = width * length;
	printf("Area of (%d,%d) is %d\n", width, length, area );
	return 0;
}