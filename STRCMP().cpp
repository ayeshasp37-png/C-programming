#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]="44";
	char s2[50]="44";
	int c;
	c=strcmp(s1,s2);
	if(c==0)
	{
	printf("same \n");
	}
	else
	{
		printf("not same");
	}
	return 0;
}
