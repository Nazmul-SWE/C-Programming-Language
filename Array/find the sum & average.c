
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    float avg=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

        sum+=arr[i];
    }
    avg= (float) sum/n;
    printf("avg=%.2f\n",avg);
    printf("Sum=%d\n",sum);
    return 0;
}
