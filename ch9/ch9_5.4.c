#include <stdio.h>
#include <string.h>

#define MAXN 0x200

// MSVC doesn't have this definition... So we declare it manually.
extern char* gets(char* str);

void Sub_String(char src[], char dst[], int startPos, int endPos)
{
    int Loop_Inc = startPos > endPos ? -1 : 1;
    
    memset(dst, 0, MAXN);
    int j = 0;
    for (int i = startPos; ; i += Loop_Inc)
    {
        dst[j++] = src[i];
        if (i == endPos)
            break;
    }
}

int main()
{
    char s[MAXN], d[MAXN];
    gets(s);
    int m, n;
    scanf("%d%d", &m, &n);
    Sub_String(s, d, m - 1, n - 1);
    puts(d);
    
    return 0;
}