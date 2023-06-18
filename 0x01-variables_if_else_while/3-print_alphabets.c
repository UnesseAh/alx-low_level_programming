#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : "A to Z in lowercase and uppercase"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		putchar(n - 32);
		n++;
	}
	putchar('\n');
	return (0);
}
