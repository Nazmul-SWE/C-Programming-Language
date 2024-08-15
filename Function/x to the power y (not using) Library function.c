
//Usein without library function:

#include<stdio.h>
int main()
{
    double base,exp,result=1;
    scanf("%lf %lf",&base,&exp);
    for(int i=1; i<=exp; i++)
    {
        result=result*base;
    }
    printf("%.2lf\n",result);
    return 0;

}



/*
base^exponent
2^3 = 2*2*2 =8
2^4 = 2*2*2*2 =16
3^4 = 3*3*3*3 =81


Usein library function:

#include<stdio.h>
int main()
{
    double base,exp,result;
    scanf("%lf %lf",&base,&exp);
    result = pow(base,exp);
    printf("%.2lf\n",result);

    return 0;
}
*/
