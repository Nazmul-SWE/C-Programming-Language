#include<stdio.h>
void function(int); //prototype
main() {
 function(50);
}
void function(int x) {
 printf("The value of x is: %d", x);
}

