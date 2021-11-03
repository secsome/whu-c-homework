#include <stdio.h>
#include <string.h>

#define MAXN 0x200

char Process_Character(char ch)
{
    if (ch == 'Z') 
        return 'A';
    
    if (ch >= 'A' && ch < 'Z')
        return ch + 1;
    
    if (ch == 'z')
        return 'a';

    if (ch >= 'a' && ch < 'z')
        return ch + 1;

    return ch;
}

int main()
{
    char s[MAXN];
    scanf("%s", s);
    
    int len = strlen(s);
    for (int i = 0; i < len; ++i)
        s[i] = Process_Character(s[i]);
    
    printf("%s", s);
    return 0;
}
