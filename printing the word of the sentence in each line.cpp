//printing  each word of the sentence in each line
#include<stdio.h>
int main()
{
	char str[1001];
	printf("enter the sentence:");
	fgets(str,sizeof(str),stdin);
	printf("words in the sentence are:\n");
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='\0'){
		

	}else{
		printf("%c",str[i]);
}
		printf("\n");
}
	return 0;
	
}
