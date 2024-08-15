
#include<stdio.h>
struct person
{
    int age;
    float salary;
};

int main()
{






    struct person person1,person2,person3;
    person1.age =27;
    person1.salary =12750.50;

    printf("Person1: \n");
    printf("Age = %d\n",person1.age);
    printf("salary = %.2f\n",person1.salary);

    person2.age =25;
    person2.salary =15750.50;

    printf("Person2: \n");
    printf("Age = %d\n",person2.age);
    printf("salary = %.2f\n",person2.salary);

    person3.age =20;
    person3.salary =10750.50;

    printf("Person3: \n");
    printf("Age = %d\n",person3.age);
    printf("salary = %.2f\n",person3.salary);


    getch();
}
