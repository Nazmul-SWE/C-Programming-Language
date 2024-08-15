#include<stdio.h>
int main(){
    int a,b,add,sub,mul,div,n;
scanf("%d %d %d",&a,&b,&n);

    int position = n;
    switch(position)
{
    case 1:
     add=a+b;
    printf("%d",add);
    break;
    case 2:
     sub =a-b;
    printf("%d",sub);
    break;
    case 3:
     mul=a*b;
    printf("%d",mul);
    break;
    case 4:
     div=a/b;
    printf("%d",div);
    break;

}


return 0;
}
