#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
int power(int a, int b);
int mod(char *line)
{
	int len = strlen(line);
	char *second = malloc((sizeof(char) * (len - 18)));
	char *first = malloc((sizeof(char) * 18));
	int i = 0, n1, a, d = 0;
	int long num1, num2, md, n2, b = 2, f;

/*sep first && second string and convert to int*/
	while (i < 19)
	{
		first[i] = line[i];
		i++;
	}
	first[i] = '\n';
	num1 = strtol(first, NULL, 10);

	while (i < len)
	{
		second[d] = line[i];
		d++;
		i++;
	}
	second[i] = '\n';
	n1 = strlen(second);
	num2 = strtol(second, NULL, 10);
/*get mod*/
	n2 = num2;

	while (1)
	{
		md = num1 % b;
		a = power(10, (n1 - 2));
		f = (int long)a;
		num2 = (f * md) + n2;

		md = num2 % b;

		if (md == 0)
		{
			i = 0;
			while (line[i] != '\n')
			{
				printf("%c", line[i]);
				i++;
			}
			printf("=%ld%ld*%ld\n", num1 / b, num2 / b, b);
			break;
		}
		b++;
	}
return (b);
}
int power(int n, int p)
{
	int i = 0;
	int num = n;

	while (i < p)
	{
		num *= n;
		i++;
	}
return (num);
}
int mod(char *line);
int power(int n, int p);
