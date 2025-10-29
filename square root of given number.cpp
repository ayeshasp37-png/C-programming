//square root of a given number
#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	printf("enter an integer:");
	scanf("%lf",num);
	root=sqrt(num);
	printf("the square root of %.2lf is %.2lf\n",num,root);
	return 0;
}
