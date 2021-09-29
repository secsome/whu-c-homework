#include <stdio.h>
#include <math.h>

int main()
{
    int a, n, count = 1;
    int sn = 0, tn = 0;

    printf("Please input a and n:\n");
    scanf("%d%d", &a, &n);
    printf("a=%d, n=%d\n", a, n);

    do {
        tn = 0;
        for (int i = 0; i < count; ++i)
            tn += a * pow(10, i);
        sn += tn;
        ++count;
    } while (count <= n);

    printf("a+aa+...=%ld\n", sn);

    return 0;
}