#include "main.h"
/**
 * main -  print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char put[9]="_putchar";

	int i=0;

	while(i < 9)

	{
		_putchar(put[i]);

		i++;

	}
	_putchar('\n');

	return (0);
}
