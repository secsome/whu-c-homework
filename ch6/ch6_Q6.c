#include <stdio.h>

int main()
{
    int A[4][4];
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            scanf("%d", &A[i][j]);

    for (int i = 0; i < 16; ++i)
    {
        int flag = 1;
        for (int j = i; j < 16; ++j)
        {
            if (A[i / 4][i % 4] < A[j / 4][j % 4])
            {
                flag = 0;
                int temp = A[i / 4][i % 4];
                A[i / 4][i % 4] = A[j / 4][j % 4];
                A[j / 4][j % 4] = temp;
            }
        }
        if (flag)
            break;
    }
    
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
            printf("%d ", A[i][j]);
        putchar('\n');
    }

    return 0;
}