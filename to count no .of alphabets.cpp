//count no of alphabets
#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[150];
	int vowels,consonant,digit,space;
	vowels=consonant=digit=space=0;
	printf("enter a line of string:");
	fgets(s,sizeof(s),stdin);
	for(int i=0;s[i]!='\0';i++){
		s[i]=tolower(s[i]);
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			vowels++;
		}
		else if(s[i]>='a'&&s[i]<='z')
		{
			consonant++;
		}
		else if(s[i]>='o'&&s[i]<='9'){
			digit++;
		}
		else if(s[i]=='\0')
		{
			space++;
		}
	}
	printf("vowels:%d",vowels);
	printf("\nconsonants:%d",consonant);
	printf("\ndigits:%d",digit);
	printf("\nwhite spaces:%d",space);
	return 0;
}
