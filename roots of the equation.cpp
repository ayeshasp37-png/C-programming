//roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,discriminant,root1,root2,realpart,imgpart;
	printf("enter the coefficients a,b and c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a==0){//a connot be zero
		printf("not a quadratic equation");
		return 0;
	}
	discriminant=b*b-4*a*c;
	if(discriminant>0){
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b+sqrt(discriminant))/(2*a);
		printf("root1=%.2lf and root2=%.2lf",root1,root2);
	}
	else if(discriminant==0){
		root1=root2=-b/(2*a);
		printf("root1=root2=%.2lf",root1);
	}
	else{
		realpart=-b/(2*a);
		imgpart=sqrt(-discriminant)/(2*a);
		printf("root1=%.2lf+%.2lfi and root2=%.2lf-%2lfi",
		realpart,imgpart,realpart,imgpart);
	}
	return 0;
}
