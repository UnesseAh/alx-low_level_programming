#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0, count = 0;

	while (s[i])
	{
		i++;
		count++;
	}

	while (count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
