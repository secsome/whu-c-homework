#include <stdio.h>

int main()
{
    int num, count = 1;
    scanf("%d", &num);
    if (num < 0) 
        num = -num;
    
    while (num /= 10)
        ++count;
    
    printf("%d", count);
    return 0;
}