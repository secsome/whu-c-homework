#include<stdio.h>

int main(void)
{
	char a, b, c;
	printf("�����������ַ�a,b,c��");
	a = getchar();
	b = getchar();
	c = getchar();
	printf("��putchar�����������ַ�,���Ϊ:");
	putchar(a);
	putchar(b);
	putchar(c);
	printf("\n");
	printf("��printf�����������ַ������Ϊ��");
	printf("%c,%c,%c\n", a, b, c);
	printf("��printf�����������ַ���ASCII��ֵ,���Ϊ:");
	printf("%d,%d,%d", a, b, c);
	return 0;
}