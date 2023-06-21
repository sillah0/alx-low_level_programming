#include "main.h"
/**
 * Print_alphabet_x10 - make alphabet x10 times
 * Description: this function prints alphabets in lowercase letters ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');
	i++;
	}
}
