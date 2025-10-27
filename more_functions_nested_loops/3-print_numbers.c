#include "main.h"
#include <stdio.h>

/**
 * print_numbers -  print using 2 putchar
 * @i: runs through the chain
 * Return: all number
 */
void print_numbers(void)
{
char text[] = "0123456789";
int i;

for (i = 0; text[i] != '\0'; i++)
		_putchar(text[i]);
	_putchar('\n');

	return (0);
}
