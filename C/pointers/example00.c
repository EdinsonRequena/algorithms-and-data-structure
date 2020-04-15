#include<stdio.h>
int main()

{
	int y;
	int *yPtr;

	y = 5;
	yPtr = &y;

	printf("Valor de y: %d \n", y);
	printf("Valor de yPtr: %d \n", yPtr);
}
