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

	temp = *a;
	*a = *b;
	*b = temp;
}

