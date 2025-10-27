# include "main.h"

/**
 * print_diagonal - prints the numbers from 0 to 9
 * @n: is the number of times the character _ should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
