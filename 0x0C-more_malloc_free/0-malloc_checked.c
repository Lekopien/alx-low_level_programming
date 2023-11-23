#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(98);  // Terminate the process with status 98
    }

    return ptr;
}
