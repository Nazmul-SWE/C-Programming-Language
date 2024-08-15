#include<stdio.h>
int sum (int a,int b)
{

   return a+b;
}


int main()
{
    int num1,num2;
    printf("The numbers are:");
    scanf("%d %d",&num1,&num2);
    int result = sum(num1,num2);
    printf("The sumition is:%d\n",result);

}
