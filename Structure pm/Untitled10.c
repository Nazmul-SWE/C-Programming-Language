#include <stdio.h>
struct student
{
    char Name[50];
    int ID;
    float marks;
    int age;
};

int main()
{
    int i,n;
    scanf("%d",&n);
    struct student s[n];
    printf("Enter information of students:\n");


    for (i = 0; i < n; ++i)
    {
        //s[i].roll = 100+i+ 1;
        printf("\nFor ID number %d\n",1000+i+ 1 );

        printf("Enter name:\n ");
        scanf("%s", &s[i].Name);
        //gets(s[i].Name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        printf("Enter AGE: ");
        scanf("%d", &s[i].age);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < n; ++i)
    {
        printf("\nRoll number: %d\n", 100+i + 1);

        printf("\nFirst name: %s", s[i].Name);
        // puts(s[i].Name);
        printf("\nMarks: %.1f", s[i].marks);
        printf("\nAge: %d", s[i].age);
        printf("\n\n");
    }
    float maxmarks = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].age < 25 && s[i].marks > maxmarks)
        {
            maxmarks =  s[i].marks;


        }
    }
    printf("Max=%f",  maxmarks);

    return 0;
}

