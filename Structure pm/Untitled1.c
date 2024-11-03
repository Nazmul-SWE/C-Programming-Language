#include<stdio.h>
int main()
{
    int i,n,first=0,second=1,third;
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        third=first+second;
        printf("%d ",third);
        first=second;
        second=third;


    }


    return 0;
}
