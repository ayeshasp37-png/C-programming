//calculate simple interest and compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter the principal amount(p):");
	scanf("%f",&p);
	printf("enter time in years(t):");
	scanf("%f",&t);
	printf("enter the rate in percent(r):");
	scanf("%f",&r);
	si=(p*r*t)/100.0;
	ci=p*(pow((1+r/100),t)-1);
	printf("simple interest=%3f\n",si);
	printf("compound interest=%3f\n",ci);
	return 0;
	
}
