#include <stdio.h>
#include <stdlib.h>

#include <string.h>
int max(int x, int y);

int lcs( char *S1,char *S2)
{
    int m = strlen(S1);
    int n = strlen(S2);
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (S1[i - 1] == S2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}
int max(int x, int y)
{
    return (x > y) ? x : y;
}
int main()
{
    char *S1 = "AGGTAB";
    char *S2 = "GXTXAYB";

    printf("Length of LCS is %d\n", lcs(S1, S2));
    return 0;
}

