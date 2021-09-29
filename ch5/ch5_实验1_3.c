#include <stdio.h>

int main()
{
    int num, count = 1;
    scanf("%d", &num);
    for (num = num < 0 ? -num : num; num / 10 != 0; ++count, num /= 10);
    printf("%d", count);
    return 0;
}