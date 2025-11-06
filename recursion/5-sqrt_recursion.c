#include "main.h"

/**
 * _sqrt_helper - aide à trouver la racine carrée de n
 * @n: nombre dont on cherche la racine
 * @i: essai actuel
 *
 * Return: racine carrée naturelle, ou -1 si elle n’existe pas
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - retourne la racine carrée naturelle de n
 * @n: nombre dont on cherche la racine
 *
 * Return: racine carrée naturelle, ou -1 si elle n’existe pas
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
