#include<stdio.h>

int main(void)
{	
	char a, b, c;
	printf("请输入一个三位数:");
	a = getchar(), b = getchar(), c = getchar();
	putchar(c); putchar(b); putchar(a);
	return 0;
}
