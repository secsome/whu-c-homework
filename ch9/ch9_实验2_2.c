#include <stdio.h>

#ifdef _MSC_VER
// MSVC doesn't have this definition... So we add it manually.
extern char* gets(char* str);
#endif

void deal(char*);

int main()
{
    char str[80];
    printf("�������ַ�����");
    gets(str);
    deal(str);
    printf("�������ַ�����");
    puts(str);
    return 0;
}

void deal(char* s)
{
    char* p = s + 1;
    char tmp = *s;
    while (*p != '\0')
    {
        *(p - 1) += *p;
        ++p;
    }
    *(p - 1) += tmp;
}