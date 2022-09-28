#include "main.h"
#include <stdio.h>
/**
 * puts_recursion - recursion
 * @s: string
 * Return: 0
 */
void _puts_recursion(char *s)

{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
