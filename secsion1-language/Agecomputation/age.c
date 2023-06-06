#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age, yob;
	printf("Input your yob: ");
	scanf("%d", &yob);
	age = 2022 - yob;
	printf("%d\n", age);
	return 0;
}