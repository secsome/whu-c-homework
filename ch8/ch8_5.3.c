#include <stdio.h>

#define MAXN 100

void Bubble_Sort(int* a, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

void My_Sort(int* a, int n)
{
    int nValidElementCount = 0;
    int b[MAXN] = { 0 };
    for (int i = 0; i < n; ++i)
    {
        if (a[i])
            b[nValidElementCount++] = a[i];
    }
    Bubble_Sort(b, nValidElementCount);
    for (int i = 0; i < n; ++i)
        a[i] = b[i];
    return;
}

void func(int* a, int n)
{
    My_Sort(a, n);
}

int main()
{
    int a[MAXN];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", a + i);

    func(a, n);
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);

    return 0;
}