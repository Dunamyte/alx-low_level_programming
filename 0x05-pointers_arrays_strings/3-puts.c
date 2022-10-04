#include "main.h"

/**
 * _puts - write string followed by new line
 * @str: string
 * Return: (0)
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
