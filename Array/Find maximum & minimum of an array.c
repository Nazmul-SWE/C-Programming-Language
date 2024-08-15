#include<stdio.h>
int main()
{
    int n,i;
    int max,min;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Max=%d\n",max);
    printf("Min=%d\n",min);
    return 0;
}
