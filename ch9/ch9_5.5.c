#include <stdio.h>
#include <string.h>

#define MAXN 0x200

void Reverse_Element(char s[])
{
    int len = strlen(s);
    char* p1 = s;
    char* p2 = s + len - 1;
    char tmp;
    while (p1 != p2)
        tmp = *p1, * p1++ = *p2, * p2-- = tmp;
}

void itoa(int x, char dst[])
{
    memset(dst, 0, MAXN);
    int i = 0, flag = 0;
    if (x < 0)
    {
        flag = 1;
        x = -x;
    }

    while (x)
    {
        dst[i++] = '0' + x % 10;
        x /= 10;
    }
    
    if (flag)
        dst[i] = '-';

    Reverse_Element(dst);
}

int main()
{
    int x;
    scanf("%d", &x);
    char buffer[MAXN];
    itoa(x, buffer);
    printf("%s", buffer);
    return 0;
}