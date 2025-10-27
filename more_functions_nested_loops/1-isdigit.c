#include "main.h"
#include <stdio.h>

/**
 * _isdigit -  check for a digit (0 through 9)
 *
 * Return: Always 0
 */

 int _isdigit(int c)
{
if (c >= '1' && c <= '9')
return (1);
return (0);
}