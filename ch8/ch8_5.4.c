#include <stdio.h>

#define MAXN 100

void Bubble_Sort(int* a, int n, int* idx)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;

                tmp = idx[i];
                idx[i] = idx[j];
                idx[j] = tmp;
            }
}

int main()
{
    int n;
    int a[MAXN];
    int idx[MAXN];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", a + i);
        idx[i] = i;
    }

    Bubble_Sort(a, n, idx);

    int k;
    scanf("%d", &k);

    // Now we just need to find kth value
    int i = 0;
    int lastNum = -1;
    int currentCounter = 0;
    int totalK = 0;
    for (; i < n; ++i)
    {
        if (a[i] != lastNum)
        {
            lastNum = a[i];
            currentCounter = 1;
            ++totalK;
            if (totalK == k)
                break;
            continue;
        }
        ++currentCounter;
    }

    printf("%d\n", a[i]);
    while (a[i] == lastNum)
        printf("%d ", idx[i++]);

    return 0;
}