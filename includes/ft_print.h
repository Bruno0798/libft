#ifndef FT_PRINT_H
#define FT_PRINT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits>
#include <unistd.h>
#include <ctype.h>

void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);

#endif