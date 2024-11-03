
#include<stdio.h>
int fact (int n1)
{
    int factorial=1;
    for (int i=1; i<=n1; i++)
    {
        factorial *=i;
    }
    return factorial;
}
int main ()
{
    int n,i,rem,str,temp,sum=0;
    scanf ("%d",&n);
    temp=n;
    while ( n>0)
    {
        rem = n%10;
        str = fact (rem);
        sum = sum+str;
        n=n/10;
    }
    if (temp==sum)
    {
        printf ("%d is a strong number",temp);
    }
    else
    {
        printf ("%d is not a strong number",temp);
    }
    return 0;
}
