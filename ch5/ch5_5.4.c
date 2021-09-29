#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, count = 0;
    while (n != 0)
    {
        ++count;
        sum += n % 10;
        n /= 10;
    }
    printf("%d %d", sum, count);
    return 0;
}