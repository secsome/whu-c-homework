#include <stdio.h>

// MSVC doesn't have this definition... So we add it manually.
extern char* gets(char* str);

int main()
{
    char str[80], * p;
    int word = 0;
    printf("������Ӣ�ľ��ӣ�");
    gets(str);

    p = str;
    while (*p != '\0')
    {
        if (!word && *p >= 'a' && *p <= 'z')
            *p -= ' ';

        word = !(*p++ == ' ');
    }

    printf("���������Ӣ�ľ��ӣ�%s\n", str);
    return 0;
}