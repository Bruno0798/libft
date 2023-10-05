#ifndef FT_STR_H
#define FT_STR_H

# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

char **ft_split(char const *s, char c);
char *ft_strchr(const char *str, int c);
char *ft_strdup(const char *src);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t n);
char *ft_strrchr(const char *str, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, size_t start, size_t len);

#endif