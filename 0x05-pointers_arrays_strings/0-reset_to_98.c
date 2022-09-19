#include "main.h"
/**
 * reset - function that take a pointer as input
 * @n: pointer parameter
 * Return: 0
 */
void reset_to_98(int *n)

{
	int p = 98;

	n = &p;
	printf("n=%d\n",n);
}

