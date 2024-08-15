#include<stdio.h>
int main()
{
    char S1[]="My name is";
    char S2[]="Nazmul Mridha";
    int D =strcmp(S1,S2);
    if(D==0){
        printf("String Are equal");
    }
    else{
        printf("String Are not equal");
    }
    return 0;
}

