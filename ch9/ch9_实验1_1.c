#include <stdio.h>

// MSVC doesn't have this definition... So we add it manually.
extern char* gets(char* str);

int main()
{
    char a[3][82]; // leave space for \r\n, stupid textbook
    int i, j, capital = 0, lowercase = 0, digital = 0, blank = 0, others = 0;

    for (i = 0; i < 3; i++)
    {
        printf("请输入文章第%d行的80个字符：", i + 1);

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
    printf("英文大写字母个数：%d\n", capital);
    printf("英文小写字母个数：%d\n", lowercase);
    printf("数字个数：%d\n", digital);
    printf("空格个数：%d\n", blank);
    printf("其他字符个数：%d\n", others);
    return 0;
}