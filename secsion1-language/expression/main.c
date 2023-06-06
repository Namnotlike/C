#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10, b = 3;
	int result = a * b;
	printf("result: %d\n", result);
	result = a / b;
	printf("result: %d\n", result);
	float r = a / b;
	printf("result: %f\n", r);// chia nguyên lưu vò thực
	float rr = a * 1.0 / b;
	printf("result: %f\n", rr);
	a += 1;// tang a len 1 don vi
	printf("after increasing 1, a = %d\n", a);
	a += 9; 
	printf("after increasing 9, a = %d\n", a);
	a++;// or ++a 
	printf("after increasing 1, a = %d\n", a);
	int m = 10;
	//int r1 = m++;
	//int r1 = m + 1;m van bang 10
	int r1 = ++m;
	printf("m = %d, r1 = %d\n", m, r1);
	return 0;
}