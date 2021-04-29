#include <stdio.h>

int test(void)
{
	int a, b, c;

	a = 0;
	b = 1;
	c = a + b;

	printf("a=%d, b=%d, c=%d\n", a, b, c);

	return 0;
}

int main(void)
{
	test();
	return 0;
}
