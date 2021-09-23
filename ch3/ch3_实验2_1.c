#include<stdio.h>

int main(void)
{
	int a = 6, b = 7, c = 8;
	float x = 1.5, y = 3.6, z = -6.9;
	long m = 53588, n = 123456;
	char c1 = 'A', c2 = 'a';
	printf("a = %4d,b = %-3d c = %d\n", a, b, c);
	printf("x = %6.4f, y = %4.2f, z = %9.6f\n", x, y, z);
	printf("m = %-9d n = %8d\n", m, n);
	printf("c1 = %c, ASCIIÂëÖµ = %d\n", c1, c1);
	printf("c2 = %c, ASCIIÂëÖµ = %d\n", c2, c2);
	return 0;
}
