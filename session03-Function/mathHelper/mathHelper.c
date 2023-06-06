#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const float PI = 3.14;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printMenu();
double computeDiskArea();
double computeRetangleArea();
double computeTriangleArea();
void doWhile();
int main(int argc, char *argv[]) {
	doWhile();
	return 0;
}
void doWhile()
{
	int choice;
	do{
		printMenu();
		scanf("%d", &choice);
			switch(choice){
				case 1:
					printf("The disk area is %f\n", computeDiskArea());
					break;
				case 2:
					printf("The retangleArea is %f\n", computeRetangleArea());
					break;
				case 3:
					printf("The triangle area is %f\n", computeTriangleArea());
					break;
				case 4:
					printf("Quit.\n");
					break;
				default:
					printf("Please input 1-4\n");
			}
		} while (choice != 4);
}
void printMenu()
{
	printf("* Please choose 1 - 9 to do:   *\n");
	printf("* 1. Compute the disk area     *\n");
	printf("* 2. Compute the retangle area *\n");
	printf("* 3. Compute the triangle area *\n");
	printf("* 4. Quit                      *\n");
}
double computeDiskArea()
{
	float r;
	scanf("%f", &r);
	//diskArea = 3.14 * r * r;
	//diskArea = PI * pow(r, 2);
	return (PI * pow(r, 2));
}
double computeTriangleArea()
{
	float a, b, c, p;
	scanf("%f%f%f", &a, &b, &c);
	p = (a + b + c)/2;
	//triangleArea = sqrt(p * (p - a) * (p - b) * (p - c));
	return sqrt(p * (p - a) * (p - b) * (p - c));;
}
double computeRetangleArea()
{
	float width, length;
	scanf("%f%f", &width, &length);
	//retangleArea = width * length;
	return width * length;
}