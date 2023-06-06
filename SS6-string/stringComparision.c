#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[50] = "Ahihi";
	char s2[50] = "Ahihi";
	int r = strcmp(s1, s2);
	printf("r1: %d\n", r);
	strcpy(s1, "Ahihi");
	strcpy(s2, "AhiH");
	r = stricmp(s1, s2);
	printf("r2: %d\n", r);
	return 0;
}