#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char firstLetter;// kí tự cho phép xài linh hoạt giữa mã số và kí tự.
	fflush(stdin);
	scanf("%c", &firstLetter);
	printf("the first letter of your name: %c\n", firstLetter);
	printf("the ASCII code of this letter is: %d\n", firstLetter);
	return 0;
}