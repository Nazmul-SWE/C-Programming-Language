#include<stdio.h>
int main()
{
    char S1[]="Nazmul Mridha";


    int i=0,len=0;
    while(S1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length:%d",len);
    return 0;
}
