#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    double d;
    a = 33;
    b = 'B';
    c = 211.5;
    d = 211.5;
    printf("a=%d\nb=%c\nc=%f\nd=%f\n", a, b, c, d);
    printf("a+b=%d\n", a + b);
    printf("a-b=%d\n", a - b);
    printf("a*b=%d\n", a * b);
    printf("a/b=%d\n", a / b);

    return 0;
}