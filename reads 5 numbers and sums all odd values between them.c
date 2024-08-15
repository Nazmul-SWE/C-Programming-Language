/*Read 5 numbers and sum of all odd values between them

Input the first number: 11

Input the second number: 17

Input the third number: 13

Input the fourth number: 12

Input the fifth number: 5

Sum of all odd values: 46

*/
#include<stdio.h>
int main(){
int j,num[5],total=0;
scanf("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);
for(j=0; j<5; j++){
    if((num[j]%2) !=0)
    {
        total += num[j];
    }
}
printf("\nSum of all odd value:%d",total);
printf("\n");
return 0;

}




