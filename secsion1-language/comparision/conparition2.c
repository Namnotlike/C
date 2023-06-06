#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age;
	scanf("%d", &age);
	int resuilt = age >= 20 && age <= 30;
	printf("result: %d\n", resuilt);
	if (resuilt == 1)
	printf ("thanh xuan\n");
	else 
	if (age < 20)
	printf ("young\n");
	else
	printf("old");
	//2. cho x là 1 con số nguyên với 1 giá trị nào đó nhập từ bàn phím. Hỏi xem x có nằm ngoài đoạn 1...100 hay không.
	int x;
	scanf("%d", &x);
	int result = x < 1 || x > 100;
	printf("check: In: 0; Out: 1, %d\n", result);
	if (result == 1)//(x < 1 || x > 100)
	printf("Yes, your number %d is out the range of 1...100", result);
	else
	printf("Sorry, your number %d is in the range 1...100", result);
	return 0;
}