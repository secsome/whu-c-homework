#include <stdio.h>

#define N 10

int Look_Up_In_Array(int source[], int result[], int number)
{
    int nResultCount = 0;
    for (int i = 0; i < N; ++i)
    {
        if (source[i] >= number)
            result[nResultCount++] = i;
    }
    return nResultCount;
}

int main()
{
    const int src[N] = { 275, 248, 195, 170, 260, 275, 259, 260, 288, 260 };
    int result[N] = { 0 };
    int n;
    scanf("%d", &n);

    int size = Look_Up_In_Array(src, result, n);
    for (int i = 0; i < size; ++i)
    {
        if (src[result[i]] == n)
        {
            printf("Student found at %d\n", 1001 + result[i]);
            return 0;
        }
    }
    printf("No student matches this score\n");

    return 0;
}