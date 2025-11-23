#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50] = "aditya";
    char s2[50] = "university";
    int i, L1, L2;

    L1 = strlen(s1);
    L2 = strlen(s2);

    for(i = 0; i < L2; i++)
    {
        s1[L1 + i] = s2[i];
    }

    s1[L1 + L2] = '\0';

    printf("%s", s1);

    return 0;
}

