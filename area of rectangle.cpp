//area of recatangle
#include<stdio.h>
int main()
{
	float len,wid,area;
	printf("enter length & width of rectangle(incm):");
	scanf("%f %f",&len,&wid);
	area=len*wid;
	printf("area of rectangle=%.3fcm\n",area);
	return 0;
}
