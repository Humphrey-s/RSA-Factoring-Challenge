#include "rsa.h"
#include <stdio.h>
/**
 * _factorize - gets the two factors of a number
 * @num: number
 * Return: returns one factor of number
 */
int _factorize(int num)
{
	int i = 2;
	int n;

	while (i < num)
	{
		n = num % i;

		if (n == 0)
		{
			return (i);
		}
		i++;
	}
return (i);
}
