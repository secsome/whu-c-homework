#include <stdio.h>

int main(void)
{
    char c;

    printf("ÇëÊäÈëÒ»¸ö×Ö·û£º");
    c = getchar();
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
        printf("letter %c\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
        printf("letter %c\n", c);
    else if (c >= '0' && c <= '9')
        printf("digit %c\n", c);
    else
    {
        printf("other character \n");
        if (c == '@' || c == '#')
            printf("%c\n", c);
    }
    return 0;
}