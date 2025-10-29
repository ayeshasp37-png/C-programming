//size of the operator
#include<stdio.h>
int main()
{
	int x=50;
	printf("size of the variable x is:%zu",sizeof(x));
	printf("\nsize of the integer data type is:%zu",sizeof(int));
	printf("\nsize of the character data type is:%zu",sizeof(char));
	printf("\nsize of the floating data type is:%zu",sizeof(float));
	printf("the address of x is:%p\n",(void*)&x);
	return 0;
}
