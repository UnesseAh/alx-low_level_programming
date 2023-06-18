#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : "Print alphabet in lowercase, followed by a new line."
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
