#include <stdio.h>

int main()
{
    int year = 0; 
    double money = 8000;
    while (year < 10 && money <= 10000)
        money *= 1 + (++year <= 3 ? 0.028 : 0.027);
    printf("%d %.2lf", year, money);
    return 0;
}