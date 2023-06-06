#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void removeChar(char* string, char c);
void removeChar2(char* string);
int main(int argc, char *argv[]) {
	char a[50];
	char c;
	scanf("%50[^\n]", a);
	fflush(stdin);
	scanf("%c", &c);
	removeChar2(a);
	puts(a);
	return 0;
}
void removeChar(char* string, char c)
{
	for(int i = 0; i <= strlen(string); i++)
		if (string[i] == c)
			for(int x = i; x < strlen(string); x++)
				string[x] = string[x + 1];
}
void removeChar2(char* string)
{
	for(int i = 0; i <= strlen(string); i++)
		if (string[i] >= '0' && string[i] <= '9')
		{
			for(int x = i; x < strlen(string); x++)
				string[x] = string[x + 1];
			i--;
		}
}