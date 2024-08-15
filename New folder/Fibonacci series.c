#include<stdio.h>

int main ()
{
    int first = 0, second = 1, third, i, n;
    printf ("Enter the length of the fibonacci series \n");
    scanf ("%d", &n);
    for (i = 2; i <= n; i++)
    {
        third = first + second;
        printf ("%d ", third);
        first = second;
        second = third;
    }
    return 0;
}
