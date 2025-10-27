#include "main.h"
#include <stdio.h>

/**
 * _isdigit -  check for a digit (0 through 9)
 * @c: the character to check
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
