#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
putchar(c--);
putchar('\n');
return (0);
}
