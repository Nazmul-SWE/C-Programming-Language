#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
};

int main()
{
    int i;
    struct student s[5];
    printf("Enter information of students:\n");


    for (i = 0; i < 5; ++i)
    {
        s[i].roll = 100+i+ 1;
        printf("\nFor roll number %d,\n", s[i].roll);

        printf("Enter first name: ");
        scanf("%s", s[i].firstName);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i)
    {
        printf("\nRoll number: %d\n", 100+i + 1);
        printf("First name: ");
        printf("First name: %s", s[i].firstName);
       // puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
