#include <stdio.h>
#include <string.h>

#define MAXN 0x200

// MSVC doesn't have this definition... So we declare it manually.
extern char* gets(char* str);

int Is_Alpha_Or_Digit(char ch)
{
    return ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9';
}

int main()
{
    char s[MAXN], dst[MAXN] = { 0 };
    gets(s);
    
    int len = strlen(s);
    for (int i = 0, j = 0; i < len; ++i)
        if (Is_Alpha_Or_Digit(s[i]) || i==0 || s[i] != s[i - 1])
            dst[j++] = s[i];

    puts(dst);

    return 0;
}