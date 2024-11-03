#include<stdio.h>
#define Max_size 1000
struct CricketPlayer
{
    int   PlayerID;
    char  PlayerName[Max_size];
    char  PlayerRole[Max_size];
    float BattingAverage;
    float BowlingAverage;
    float FieldingAverage;
    float TotalAverage;
};
int main ()
{
    int n,i,count=0;
    float HTA;
    scanf ("%d",&n);
    struct CricketPlayer Player[n];

    for (i=0; i<n; i++)
    {
        scanf ("%d",&Player[i].PlayerID);
        scanf(" %[^\n]", Player[i].PlayerName);
        scanf(" %[^\n]", Player[i].PlayerRole);
        scanf ("%f", &Player[i].BattingAverage);
        scanf ("%f", &Player[i].BowlingAverage);
        scanf ("%f", &Player[i].FieldingAverage);
        Player[i].TotalAverage = ((Player[i].BattingAverage +Player[i].BowlingAverage +Player[i].FieldingAverage)/3);
    }

    for (i=0; i<n; i++)
    {
        if (Player[i].TotalAverage<40.0)
        {
            count++;
        }
    }
    printf ("%d\n",count);
    HTA = Player[0].TotalAverage;
    for ( i=1; i<n; i++)
    {
        if (Player[i].TotalAverage > HTA)
        {
         HTA = Player[i].TotalAverage ;
        }
    }

    printf ("%f",HTA);
    return 0;
