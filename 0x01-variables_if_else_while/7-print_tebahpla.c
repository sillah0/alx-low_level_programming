#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putcahr(n);
		n--;
	}
	putchar('\n');
	return (0);
}
