#include "main.h"

/**
 * _puts - prints charaters to std out
 * @str: parameter
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
