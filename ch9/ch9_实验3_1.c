#include <stdio.h>
#include <string.h>

// MSVC doesn't have this definition... So we add it manually.
extern char* gets(char* str);

int main()
{
    char str[80], * s;
    printf("������ԭʼ�ַ�����");
    gets(str);
    printf("ԭʼ�ַ�������Ϊ%d\n", strlen(str));

    s = str;
    while (*s == ' ')
        ++s;
    strcpy(str, s);
    int len = strlen(str);
    s = str + len - 1;
    while (*s == ' ')
        --s;
    *(s + 1) = '\0';

    printf("����ַ�����");
    puts(str);
    printf("����ַ�������Ϊ%d\n", strlen(str));
    return 0;
}