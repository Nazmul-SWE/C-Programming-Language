#include<stdio.h>
int Fibonacci(int n,int memo[])
{
    if(n==0 || n==1)
    {
        return n;
    }
    if(memo[n]!=-1){
        return memo[n];
    }
    return memo[n]=Fibonacci(n-1,memo)+Fibonacci(n-2,memo);
}
int memo_initialization(int n)
{
    int memo[n+1];
    for(int i=0; i<=n; i++)
    {
        memo[i]=-1;
    }
    int result =Fibonacci(n,memo);

}
int main()
{
    int n=10;
    int result = memo_initialization(n);
    printf("%d",result);

    return 0;
}
