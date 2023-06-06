#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void heat();
int main(int argc, char *argv[]) {
	heat();
	return 0;
}
void heat()
{
	int* p = (int*)malloc(20);
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", (p + i));
		printf("%d\n", *(p + i));
	}
}