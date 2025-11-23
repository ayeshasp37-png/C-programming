#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]="aditya";
	char s2[40]="university";
	int i,flag=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		flag=1;
		break;
		if(flag==0)
		{
			printf("same");
		}
		else
		{
			printf("not same");
		}
		return 0;
	}
}
