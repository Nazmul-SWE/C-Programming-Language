
#include<stdio.h>
int main (){
    int n=7976,rem,sum=0;
    while(n>9)
    {
     sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        n=sum;
        printf("digit of sum:%d\n",sum);
    }
    printf("\n: final digit of sum: %d",sum);
    return 0;
}

