#include <stdio.h>

int main()
{
    int x, y, * px = &x, * py = &y;
    char ch[0x100];
    printf("����������������");
    scanf("%d%d", &x, &y);
    fflush(stdin);
    printf("��ָ������ʽ��a-���� d-���򣩣�");
    scanf("%s", ch);
    if (x > y && ch[0] == 'a' || x < y && ch[0] == 'd')
    {
        int tmp = *px;
        *px = *py;
        *py = tmp;
    }
    printf("��������%d\t%d\n", *px, *py);
    return 0;
}