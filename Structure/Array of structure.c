

#include<stdio.h>
struct person
{
    int age;
    float salary;
};

int main()
{

    struct person person[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Information for person %d\n",i+1);
        scanf("%d %f",&person[i].age,&person[i].salary);
    }
    getch();
}
