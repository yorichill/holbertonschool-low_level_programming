#include "main.h"

/**
 * check_prime - vérifie récursivement si n est divisible par un autre nombre
 * @n: nombre à tester
 * @i: diviseur à tester
 *
 * Return: 1 si n est premier, 0 sinon
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - détermine si un nombre est premier
 * @n: nombre à vérifier
 *
 * Return: 1 si le nombre est premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
