#include <stdio.h>

#define N 10

int main()
{
    int a[N], t, * p, * q;
    printf("������%d��������", N);
    for (p = a; p < a + N; ++p)
        scanf("%d", p);
    p = a;
    q = a + N - 1;
    
    // Do reserve work
    while (p < q)
    {
        t = *p;
        *p = *q;
        *q = t;
        ++p;
        --q;
    }

    printf("���ý����");
    for (p = a; p < a + N; ++p)
        printf("%d ", *p);
    printf("\n");
    return 0;
}