#include <stdio.h>
 int i=0;
int output[5];
int greedyCoinChange(int c[], int n, int i)
{
    if (n == 0)
    {
        return 0;
    }
    if(c[i]<=n)
    {
        return 1+greedyCoinChange(c, n-c[i], i);
    }
    else
    {
        return greedyCoinChange(c, n, i+1);
    }
}
int main()
{
    int c[5] = {50, 25, 20, 10, 5}; //sorted array
    int n = 140;
    int total_coin= greedyCoinChange(c, n, i);
    printf("Total coins: %d\n", total_coin);
}
