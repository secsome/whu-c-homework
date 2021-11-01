#include <stdio.h>

int main()
{
    int x, y, * px = &x, * py = &y;
    char ch[0x100];
    printf("请输入两个整数：");
    scanf("%d%d", &x, &y);
    fflush(stdin);
    printf("请指定排序方式（a-升序 d-降序）：");
    scanf("%s", ch);
    if (x > y && ch[0] == 'a' || x < y && ch[0] == 'd')
    {
        int tmp = *px;
        *px = *py;
        *py = tmp;
    }
    printf("排序结果：%d\t%d\n", *px, *py);
    return 0;
}