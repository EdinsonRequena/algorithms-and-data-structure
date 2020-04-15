#include<stdio.h>
int main()

{
	int a;
	int *a_pointer;

	a = 5;
	a_pointer = &a;

	printf("Valor de a: %d \n", a);
	printf("Valor de a_pointer: %d \n", a_pointer);
}
