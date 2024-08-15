#include<stdio.h>
int main (){
int n,rem,rev=0,sum=0;
scanf("%d",&n);
while(n>0){
    rem=n%10;
    rev= rev*10+rem;
     sum=sum+rem;
    n=n/10;
    }

    printf("%d\n",rev);
     printf("%d\n",sum);
return 0;
}

