#include <stdio.h>

int main(void)
{

	int n;
	int *p;

	n = 98;
	p = &n;

	printf("%d\n", n);
	printf("%p\n", p);
	printf("%p\n", *p);

	*p = 402;
	printf("%p\n", p);
	printf("%d\n", n);
	return (0);
}
