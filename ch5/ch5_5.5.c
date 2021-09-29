#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 0; j < 3 - i; ++j)
            putchar(' ');
        for (int j = 0; j < i * 2 - 1; ++j)
            putchar('*');
        for (int j = 0; j < 3 - i; ++j)
            putchar(' ');
        putchar('\n');
    }
    for (int i = 2; i >= 1; --i)
    {
        for (int j = 0; j < 3 - i; ++j)
            putchar(' ');
        for (int j = 0; j < i * 2 - 1; ++j)
            putchar('*');
        for (int j = 0; j < 3 - i; ++j)
            putchar(' ');
        putchar('\n');
    }
    return 0;
}