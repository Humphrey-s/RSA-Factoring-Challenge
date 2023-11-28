#include "rsa.h"
#include <stdio.h>

int count(FILE *file)
{
	int c;
	int i = 0;

	c = fgetc(file);

	while (c != EOF)
	{
		if (c == '\n')
			i++;

		c = fgetc(file);
	}
return (i);
}
