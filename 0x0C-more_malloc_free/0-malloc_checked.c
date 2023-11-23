#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
