
#include<stdio.h>
int main(){
int n,i,flug=0;
scanf("%d",&n);
for(i=1; i<n; i++){
      if(n%i==0){
        flug++;
      }
}
if(flug==2){

    printf("The number is prime");
}
else{
   printf("The number is not prime");
}

return 0;
}

