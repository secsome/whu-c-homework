#include <stdio.h>

// MSVC doesn't have this definition... So we add it manually.
extern char* gets(char* str);

int main()
{
    char s[80];
    int i = 0, j;
    printf("ÇëÊäÈë×Ö·û´®£º");
    gets(s);
    while (s[i] != '\0')
    {
        if (s[i] == 'o')
        {
            j = i + 1;
            while (s[j] != '\0')
                s[j - 1] = s[j++];
            s[j - 1] = '\0';

            while (i--)
            {
                char tmp = s[0];
                j = 1;
                while (s[j] != '\0')
                    s[j - 1] = s[j++];
                s[j - 1] = tmp;

            }
        }
        else 
            ++i;
    }
    printf("½á¹û×Ö·û´®£º%s\n", s);
    return 0;
}