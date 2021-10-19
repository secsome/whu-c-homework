#include <stdio.h>

#define MAXN 5

int main()
{
    int A[MAXN][MAXN], B[MAXN][MAXN], R[MAXN][MAXN] = { 0 };
    
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // axb * bxc
    // get a*c

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            scanf("%d", &A[i][j]);

    for (int i = 0; i < b; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < c; ++j)
            for (int k = 0; k < b; ++k)
                R[i][j] += A[i][k] * B[k][j];

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < c; ++j)
            printf("%d ", R[i][j]);
        putchar('\n');
    }

    return 0;
}