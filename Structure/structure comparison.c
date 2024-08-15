
#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    //struct person person1,person2;
    struct person person1 = {27,25550.50};
    struct person person2,person3;
    //struct person person2 ={25,25550.50};

    //element wise assignment
    person2.age=25;
    person2.salary=27750.50;


    //structure variable assignment
    person3 = person2;

    if(person2.age == person1.age && person2.salary==person1.salary)
    {
        printf("person1 equal person 2");

    }

    else
    {
        printf("person1 not equal person 2");
    }


    getch();
}

