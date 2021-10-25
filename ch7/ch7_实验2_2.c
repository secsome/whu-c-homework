#include <stdio.h>

void Transpose(int in[5][3], int out[3][5])
{
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 3; ++j)
            out[j][i] = in[i][j];
}

int main()
{
    int a[5][3];
    int b[3][5];

    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 3; ++j)
            scanf("%d", &a[i][j]);

    Transpose(a, b);

    for (int i = 0; i < 3; ++i, putchar('\n'))
        for (int j = 0; j < 5; ++j)
            printf("%d ", b[i][j]);

    return 0;
}