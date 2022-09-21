#include "main.h"

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write code
	 * - no use of a
	 * -  no modifying with p
	 * -  only one statement
	 */
	*(p + 5) = 98;
	/* to print 98\n */
	printf("a[2]);
	return (0);
}
