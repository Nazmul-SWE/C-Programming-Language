
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
    person2.age=19;
    person2.salary=15500.50;



    //structure variable assignment
    person3 = person2;



    printf("\nperson1:\n");
    printf("Age =%d\n",person1.age);
    printf("Salary =%.2f\n",person1.salary);


    printf("\nperson2:\n");
    printf("Age =%d\n",person2.age);
    printf("Salary =%.2f\n",person2.salary);


    printf("\nperson3:\n");
    printf("Age =%d\n",person3.age);
    printf("Salary =%.2f\n",person3.salary);


    getch();
}
