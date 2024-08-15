
#include<stdio.h>
double area(double b,double h)
{
    return 0.5 * b * h;
}
int main()
{
    double base,height;
    scanf("%lf %lf",&base,&height);
    double result=  area(base,height);
    printf("The area is: %.2lf\n",result);


}




/*

#include<stdio.h>
int main()
{
    double base,height;
    scanf("%lf %lf",&base,&height);
    double result=   0.5*base*height;
    printf("The area is: %.lf\n",result);


}
*/
