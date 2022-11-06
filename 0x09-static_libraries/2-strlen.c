#include "main.h"

/**
 * _strlen - swaps the values in the paramter locations
 * @s: parameter pointer variable value to be swapped
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

