#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */

int main(void)
{
	char c;
	int i;
	long int d;
	long long int a;
	float f;

printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
