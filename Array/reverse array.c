#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);


    }
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
