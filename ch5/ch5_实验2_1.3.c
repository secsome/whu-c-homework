#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sum, n;
    printf("Please input how many terms you want the computer to calculate(1-9):\n");
    scanf("%d", &n);
    if (n < 1 || n >= 10)
    {
        printf("Overflow!\n");
        exit(0);
    }
    sum = 0;
    for (int i = 1, tmp = 1; i <= n; sum += tmp, tmp = i++ + 1)
        for (int j = 1; j < i; ++j)
            tmp += i * (int)pow(10, j);

    printf("sum = %d\n", sum);

    return 0;
}