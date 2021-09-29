#include <stdio.h>

int main()
{
    double money;
    scanf("%lf", &money);

    if (money >= 1000)
        printf("%lf", money * 0.8);
    else if (money >= 500)
        printf("%lf", money * 0.9);
    else if (money >= 200)
        printf("%lf", money * 0.95);
    else if (money >= 100)
        printf("%lf", money * 0.97);
    else
        printf("%lf", money);

    return 0;
}