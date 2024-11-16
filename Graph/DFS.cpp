
#include<stdio.h>
int V = 5;
int visited[5];
int G[5][5] =
{
    {0,1,0,0,1},
    {1,0,0,1,1},
    {0,0,0,1,0},
    {0,1,1,0,1},
    {1,1,0,1,0}
};
void DFS(int current)
{
    visited[current] = 1;
    printf("%d ", current);
    for(int j=0; j<V; j++)
    {
        if(G[current][j]==1 && visited[j]==0)
        {
            DFS(j);
        }
    }
}
int main()
{

    DFS(0);
}