#include<stdio.h>
void review()
{
    printf("This is from review \n\n");
}
void show()
{
    printf("This is from show \n");
    review();
    printf("Back to show \n");
}
int main()
{
    printf(" it is main code\n\n");
    show();
    printf(" Back in main function code\n\n");
}

