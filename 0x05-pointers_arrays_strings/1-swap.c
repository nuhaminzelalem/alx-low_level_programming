#include "main.h"
/**
 * swap_int - swap
 * @a: variable 
 * @b:variable
 * Return: 0
 */
 void swap_int(int *a, int *b)

{
	int temp;

	temp = &a;
	temp = *a;
	*b = temp;
	a = &b;
	*a = *b;
}

