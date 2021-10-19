#include <stdio.h>

int main()
{
    char num[4];
    for (int i = 0; i < 4; ++i)
        num[i] = (getchar() - '0' + 5) % 10;
    printf("%d%d%d%d", num[3], num[2], num[1], num[0]);
    return 0;
}