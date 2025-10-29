//area of triangle
#include<stdio.h>
int main()
{
	float b,h,area;
	printf("enter base and height(incm):");
	scanf("%f %f",&b,&h);
	area=0.5*b*h;
	printf("area of the triangle=%.2fcm\n",area);
	return 0;
}
