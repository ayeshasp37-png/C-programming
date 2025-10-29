//bitwise operators
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("\nBitwise operations:\n");
	printf("\nBitwise AND(&)\n%d&d=%d\n",a,b,a&b);
	printf("\n Bitwise OR(|)\n%d|%d=%d\n",a,b,a|b);
	printf("\n Bitwise XOR(^)\n%d^%d=%d\n",a,b,a^b);
	printf("\nLeftshift(<<)\n%d<<%d=%d\n",a,b,a<<b);
	printf("\nRightshift(>>)\n%d<<%d=%d\n",a,b,a>>b);
	return 0;
	
}
