#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void writeAPoem();
void readAPoem();
void readAPoem1();
int main(int argc, char *argv[]) {
	writeAPoem();
	readAPoem1();
	return 0;
}
void writeAPoem()
{
	FILE* f = fopen("tu-ay.txt", "w");
	fprintf(f, "I don't know\n");
	fclose(f);
}
void readAPoem()
{
	FILE* f = fopen("tu-ay.txt", "r");
	char ch;
	do
	{
	ch = fgetc(f);
	printf("%c", ch);
	} while( ch != EOF);// end of file
	fclose(f);
}
void readAPoem1()
{
	FILE* f = fopen("tu-ay.txt", "r");
	char* ch;
	ch = fgets("%s", 1, f);
	printf("%s", ch);
	
	fclose(f);
}