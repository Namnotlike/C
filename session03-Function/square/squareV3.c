#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fV3();
int main(int argc, char *argv[]) {
	// hàm loại 1 và 2 chỉ cần gọi tên em là đủ
	// hàm loại 3 gọi tên em chưa đủ vì em là  value 
	int result = fV3();
	printf("result: %d\n", fV3());
	return 0;
}
int fV3(){
	int x, y;
	printf("Input an interger to get ^2: ");
	scanf("%d", &x);
	y = x * x;
	//printf("The funtion y = f(x) = x^2; y = f(%d) = %d\n", x, y);
	return y;
}// HÀNH ĐỘNG KHÔNG printf() kết quả, mà chỉ return
 //NGOÀI ĐỜI: NÉM GÓI CON MÈO CHO MÌNH CHỤP LẠI TƯƠNG ĐƯƠNG CÂU PRINTF()