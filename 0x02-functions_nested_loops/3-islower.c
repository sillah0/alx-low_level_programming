#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Description:
 * This function checks whether the given character 'c' is a lowercase letter.
 *
 * Return:
 * 1 if 'c' is a lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
