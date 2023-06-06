#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *a, int *b);
void increase();
void decrease();
int main(int argc, char *argv[]) {
	int x;
	for(; ;)
	{
		scanf("%d", &x);
	
		switch (x)
		{
		case (1):
			increase();
			break;
		case (2):
			decrease();
			break;
		case(3):
			return;
		default:
			printf("lamf lai di");
			break;
	}
	}	
	return 0;
}
void swap(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}

void increase()
{
	int n;
	scanf("%d", &n);
	fflush(stdin);
	float a[n];
	for(int i = 0; i < n; i++)
		{
		scanf("%f", &a[i]);
		fflush(stdin);
		}
	for(int x = 0; x < (n - 1); x++)
		for(int i = x + 1; i < n; i++)
			if(a[i] < a[x])
				swap(&a[i], &a[x]);
	for(int i = 0; i < n; i++)
		printf("%.2f	", a[i]);
}

void decrease()
{
	int n;
	scanf("%d", &n);
	fflush(stdin);
	float a[n];
	for(int i = 0; i < n; i++)
		{
		scanf("%f", &a[i]);
		fflush(stdin);
		}
	for(int x = 0; x < (n - 1); x++)
		for(int i = x + 1; i < n; i++)
			if(a[i] > a[x])
				swap(&a[i], &a[x]);
	for(int i = 0; i < n; i++)
		printf("%.2f	", a[i]);
}