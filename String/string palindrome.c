#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "mam";
    char str2[30];
    int i=0,len=0,j;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--, j++)
    {
        str2[j]=str1[i];

    }
    str2[j]='\0';
    printf("Str1:%s\n",str1);
    printf("Revers:%s\n",str2);

    if(strcmp(str1, str2) == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
