#include <stdio.h>
#define N 100

void move(int[], int, int);

int main()
{
    int a[N];
    int i, m, n;

    printf("�����������ܸ�����");
    scanf("%d", &n);
    
    printf("������%d��������", n);
    for (i = 0; i < n; ++i)
        scanf("%d", a + i);
    
    printf("������׼���ƶ�������������");
    scanf("%d", &m);
    
    move(a, n, m);
    
    printf("�ƶ������");
    for (i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}

void move(int a[], int n, int m)
{
    while (m--)
    {
        int last = a[n - 1];
        for (int i = n - 2; i >= 0; --i)
            a[i + 1] = a[i];
        a[0] = last;
    }
}