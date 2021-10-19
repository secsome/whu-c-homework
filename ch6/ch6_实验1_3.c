#include <stdio.h>

int main()
{
    int i = 0, base, num[32];
    long int n; char c;
    printf("Input num:");
    scanf("%ld", &n);
    printf("Input base:");
    scanf("%d", &base);
    for (i = 0; n != 0; ++i)
    {
        num[i] = n % base;
        n = n / base;
    }
    printf("the result is:");
    for (i--; i >= 0; i--)
    {
        if (num[i] >= 0 && num[i] <= 9)
            c = '0' + num[i];
        else
            c = 'A' + num[i] - 10;
        printf("%c", c);
    }
    return 0;
}