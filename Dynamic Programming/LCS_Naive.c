
#include <stdio.h>
int max(int a, int b);
int lcs(char *S1, char *S2, int i, int j)
{
    if (S1[i] == 0 || S2[j] == 0)
        return 0;
    if (S1[i] == S2[j])
        return 1 + lcs(S1, S2, i + 1, j + 1);
    else
        return max(lcs(S1, S2, i, j + 1), lcs(S1, S2, i + 1, j));
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    char S1[] = "AGGTAB";
    char S2[] = "GXTXAYB";

    int i = 0, j = 0;

    printf("Length of LCS is %d", lcs(S1, S2, i, j));
    return 0;
}
