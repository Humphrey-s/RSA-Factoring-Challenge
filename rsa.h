#ifndef RSA_H
#define RSA_H
#include <stdio.h>
#define UNUSED __attribute__((unused))

int _factorize(int num);
int strlong(char *line);
int count(FILE *file);
int mod(char *line);
#endif
