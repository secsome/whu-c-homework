#include <stdio.h>

// MSVC doesn't have this definition... So we add it manually.
extern char* gets(char* str);

int main()
{
    char a[3][82]; // leave space for \r\n, stupid textbook
    int i, j, capital = 0, lowercase = 0, digital = 0, blank = 0, others = 0;

    for (i = 0; i < 3; i++)
    {
        printf("���������µ�%d�е�80���ַ���", i + 1);

        gets(a[i]); // It's not quite safe if we don't modify a[3][80] into a[3][82]

        for (int j = 0; j < 80; ++j)
        {
            if (a[i][j] >= 'A' && a[i][j] <= 'Z')    ++capital;
            else if (a[i][j] >= 'a' && a[i][j] <= 'z') ++lowercase;
            else if (a[i][j] >= '0' && a[i][j] <= '9') ++digital;
            else if (a[i][j] == ' ') ++blank;
            else ++others;
        }
        
        fflush(stdin);
    }
    printf("Ӣ�Ĵ�д��ĸ������%d\n", capital);
    printf("Ӣ��Сд��ĸ������%d\n", lowercase);
    printf("���ָ�����%d\n", digital);
    printf("�ո������%d\n", blank);
    printf("�����ַ�������%d\n", others);
    return 0;
}