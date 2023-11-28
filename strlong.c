#include <stdio.h>
#include "rsa.h"
#include <string.h>
#include <math.h>
#include <gmp.h>
int strlong(char *line)
{
	char *str = line;
	char array[1024];
	char array2[1024];
	unsigned long int a = 0;
	int i = 0, n = strlen(line), flag;
	mpz_t num, remainder, it1, one, zero, quotient, num1;


	strcpy(array2, array);
	while (i < n)
	{
		array[i] = line[i];
		i++;
	}

	mpz_init(num);
	mpz_set_ui(num, 0);

	mpz_init(num1);
	mpz_set_ui(num1, 0);

	mpz_init(it1);
	mpz_set_ui(it1, 2);

	mpz_init(one);
	mpz_set_ui(one, 1);

	mpz_init(zero);
	mpz_set_ui(zero, 0);

	flag = mpz_set_str(num, array, 10);
	mpz_set_str(num1, array2, 10);
	while (a < 800)
	{
		mpz_mod(remainder, num, it1);

		if (mpz_cmp(remainder, zero) == 0);
		{;
			gmp_printf("%Zd=%Zd*%Zd\n", num1, num, it1);
			return (0);
		}
		a++;

	}
return (1);
}

int main(void)
{
	strlong("12378888888888888888888888");
return (0);
}
