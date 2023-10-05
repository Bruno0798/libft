#ifndef FT_MEMORY_H
# define FT_MEMORY_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits>
# include <unistd.h>
# include <ctype.h>

void *ft_bzero(void *b, size_t len);
void *ft_calloc(size_t n, size_t size);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *b, int c, size_t len);

#endif