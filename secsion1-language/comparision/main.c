#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r = 5 > 4;
	printf("5 > 4, %d\n", r);
	r = 5 < 4;
	printf("5 < 4, %d\n", r);
	r = 10 == 10;
	printf("10 == 10, %d\n", r);
	r = 100 <= 100;
	printf("100 <= 100, %d\n", r);
	r = 100 != 100;
	printf("100 <> 100, %d\n", r);
	// cho 2 biến a và b với 2 giá trị của chúng. hãy so sánh chúng.
	int a = 10, b = 3;
	int m = a == b;
	printf("a == b, %d\n", m);
	m = a != b;
	printf("a <> b, %d\n", m);
	int age;
	scanf("%d", &age);
	if (age >= 20)
	printf("truong thanh\n");
	if (age < 20)
	printf ("connit");
	
	return 0;
}