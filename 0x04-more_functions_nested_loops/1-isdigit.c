#include "main.h"
/**
 * _isdigit - is it digit
 *@c: check wheather it is digit or not
 * Return: Always 0 (Success)
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
