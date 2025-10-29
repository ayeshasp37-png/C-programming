//area of square
#include<stdio.h>
int main()
{
	float side,area;
	printf("enter side of square(in cm):");
	scanf("%f",&side);
	area=side*side;
	printf("area of square=%.2fcm\n",area);
	return 0;
}
