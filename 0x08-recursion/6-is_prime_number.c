#include "main.h"
/**
 *helperFunction - return 0 or 1.
 *@num: number being checked.
 *@1: possible factor of the number.
 *
 *Return: 0 if not prime, 1 if prime.
 */
int helperfunction(int num. int 1)
{
	if ((1 < num)

		if (num % == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 *is_prime_number - check if number is prime or not.
 *@n: number to be checked'
 *
 *Return: 1 if number is prime.
 *0 if number is not prime.
 */
int is_prime_number(int n)

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
}




























