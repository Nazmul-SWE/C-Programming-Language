
#include<stdio.h>
int main(){

    char S1[]="My name is";
    char S2[]="Nazmul Mridha";
    char temp[15];
    strcpy(temp,S1);
     strcpy(S1,S2);
      strcpy(S2,temp);
      printf("S1=%s\n",S1);
      printf("S2=%s\n",S2);

return 0;
}
