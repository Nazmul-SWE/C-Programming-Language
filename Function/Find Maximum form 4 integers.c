
#include <stdio.h>
int findMax(int num1, int num2)
{
    int maxx;
    if(num1 > num2)
        maxx = num1;
    else
        maxx = num2;
    return maxx;
}
int main()
{
    int a,b,c,d, m;
    printf("Enter the 4 elements :");
    scanf("%d%d%d%d", &a,&b,&c,&d);

    m = findMax(a,b);
    m= findMax(m,c);
    m= findMax(m,d);
    printf("maximum: %d\n", m);
    return 0;
}
