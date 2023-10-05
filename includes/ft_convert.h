#ifndef FT_CONVERT_H
#define FT_CONVERT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
#include <ctype.h>

int ft_atoi(const char *str);
char *ft_itoa(int n);
int ft_tolower(int c);
int ft_toupper(int c);

#endif