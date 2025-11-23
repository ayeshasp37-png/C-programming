#include<stdio.h>
int main()
{
	int i=0,c=0;
	char s[100];
	printf("enter string \n");
	gets(s);
	while(s[i]!='\0')
	{
		c++;
		i++;
	}
	printf("%d",c);
}
