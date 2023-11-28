#include "rsa.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <gmp.h>
/**
 * main - Entry point
 * argc: argument count
 * argv: arguments
 * Return: (Success)
 */
int main(int argc, char **argv)
{
	FILE *file;
	int nlines;
	ssize_t read;
	size_t len = 0;
	char *line = NULL;
	int num, f1, f2;
	UNUSED long int f3, f4;

	if (argc <= 1)
		printf("Usage: factors <file>\n");

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "file null\n");
		return (EXIT_FAILURE);
	}

	nlines = count(file);
	if (nlines == 0)
	{
		fprintf(stderr, "file empty\n");
		return (EXIT_FAILURE);
	}

	fseek(file, 0L, SEEK_SET);

	while((read = getline(&line, &len, file)) != -1)
	{
		num = atoi(line);
		
		f1 = _factorize(num);
		
		if (num == -1)
		{
			mod(line);
		}
		else
		{
		f2 = num / f1;
		printf("%d=%d*%d\n", num, f2, f1);
		}
	}
return (0);
}
