#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int main()
{

    int result=sum(5,6);
    printf("The Sum is:%d\n",result);

    result=sum(7,6);
    printf("The Sum is:%d\n",result);

    result=sum(12,6);
    printf("The Sum is:%d\n",result);
}
