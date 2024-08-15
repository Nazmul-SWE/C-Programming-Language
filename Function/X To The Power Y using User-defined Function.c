
#include<stdio.h>
void Calculatepower(double base,double exp)
{
    double result=1,i;
    for(int i=1; i<=exp; i++)
    {
        result=result*base;
    }
    printf("%.2lf\n",result);
}
int main()
{
    double base,exp;
    scanf("%lf %lf",&base,&exp);
    Calculatepower(base,exp);
}
