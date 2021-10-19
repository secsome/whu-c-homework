#include <stdio.h>

int main()
{
    int n, sum = 0, count = 0;
    for (int i = 0; i < 20; ++i)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            sum += n;
            ++count;
        }
    }
    printf("%d %d", count, sum);

    return 0;
}