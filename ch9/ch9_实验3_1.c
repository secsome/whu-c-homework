#include <stdio.h>
#include <string.h>

// MSVC doesn't have this definition... So we add it manually.
extern char* gets(char* str);

int main()
{
    char str[80], * s;
    printf("请输入原始字符串：");
    gets(str);
    printf("原始字符串长度为%d\n", strlen(str));

    s = str;
    while (*s == ' ')
        ++s;
    strcpy(str, s);
    int len = strlen(str);
    s = str + len - 1;
    while (*s == ' ')
        --s;
    *(s + 1) = '\0';

    printf("结果字符串：");
    puts(str);
    printf("结果字符串长度为%d\n", strlen(str));
    return 0;
}