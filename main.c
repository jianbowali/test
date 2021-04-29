#include <stdio.h>

int test(void)
{
	int a, b, c;

	a = 0;
	b = 1;
	c = a + b;

	printf("c=%d\n", c);

	return 0;
}

int main(void)
{
	test();
	return 0;
}
