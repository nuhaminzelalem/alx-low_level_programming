#include "main.h"
/**
 * main - prints "_putchar" followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	char put[] = "_putschar";
	while (i < 9)
	{
	_putchar(put[i]);

	}
	_putchar('\n');

	return (0);
}
