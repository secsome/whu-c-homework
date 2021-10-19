#include <stdio.h>

int main()
{
    int temp[1000], cnt = 0;
    for (int i = 2; i <= 1000; ++i)
    {
        cnt = 0;
        for (int j = 1; j < i; ++j)
        {
            if (i % j == 0)
                temp[cnt++] = j;
        }
        int sum = 0;
        for (int j = 0; j < cnt; ++j)
            sum += temp[j];
        if (sum == i)
            printf("%d\n", i);
    }

    return 0;
}