
#include<stdio.h>
int main(){
 int num1,num2,temp;
 scanf("%d %d",&num1,&num2);
 temp=num1;
 num1=num2;
 num2=temp;
 printf("num1=%d\n",num1);
 printf("num2=%d\n ",num2);

return 0;
}
