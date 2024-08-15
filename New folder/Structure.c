
#include<stdio.h>
struct CricketPlayer
{
    int Player_ID;
    char Player_Name[20];
    char Player_Role[20];
    float Batting_Average;
    float Bowling_Average;
    float Fielding_Average;
    float Total_Average;
};
int main()
{
    int n,sum=0,count=0,flag,i;

    float Avg1,Avg;
    scanf("%d",&n);
    struct CricketPlayer s[n];
    for(int i=0; i<n; i++)
    {
        sum=0;
        printf("ID %d",100+i+1);
        printf("\nPlayer Name: ");
        scanf("%s",&s[i].Player_Name);
        printf("\nPlayer Role: ");
        scanf("%s",&s[i].Player_Role);
        printf("\nBatting Average: ");
        scanf("%f",&s[i].Batting_Average);
        printf("\nBowling Average: ");
        scanf("%f",&s[i].Bowling_Average);
        printf("\nFielding Average: ");
        scanf("%f",&s[i].Fielding_Average);

        sum+=(s[i].Batting_Average + s[i].Bowling_Average + s[i].Fielding_Average);

        s[i].Total_Average= (float) sum/3;
        printf("\n\n\n= %f\n", s[i].Total_Average);
    }
    float maxavg = 0.0;
    for (i = 0; i < n; i++)
    {

        if (   s[i].Total_Average < 40.0 )
        {
            count++;

        }


        if ( s[i].Total_Average > maxavg)
        {

            maxavg = s[i].Total_Average;

            flag=i;
        }



    }
    printf("\n\n\n flag=%d",flag);

    printf("\nID: %d\n", 100+flag + 1);

    printf("\nPlayer Name: %s",s[flag].Player_Name);
    printf("\nPlayer Role: %s",s[flag].Player_Role);
    printf("\nBatting Average: %.2f",s[flag].Batting_Average);
    printf("\nBowling Average: %.2f",s[flag].Bowling_Average);
    printf("\nFielding Average: %.2f",s[flag].Fielding_Average);






    printf("\n\nCount:%d\n",count);
//printf("AVG= %.2f\n", maxavg);


}
