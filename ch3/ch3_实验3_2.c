#include<stdio.h>

int main(void)
{
	int a, b;
	float c;
	double d;
	printf("Please input int nums:\n");
	scanf("%d%d", &a, &b);
	printf("Please input float num:\n");
	scanf("%f", &c);
	printf("Please input double num:\n");
	scanf("%lf", &d);
	printf("a=%d, b=%d, c=%f, d=%lf\n", a, b, c, d);
	return 0;
}
