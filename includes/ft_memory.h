/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:12:24 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/12/17 04:54:04 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMORY_H
# define FT_MEMORY_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

/**
 * @brief Fills the first n bytes of the memory area pointed to by s with the
 * constant byte 0.
 *
 * @param b The pointer to the area to fill
 * @param len The size of the area
 */
void	*ft_bzero(void *b, size_t len);

/**
 * @brief Allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory. The memory is set to zero.
 *
 * @param n The number of elements
 * @param size The size of each element
 * @return void* The pointer to the allocated memory
 * @return NULL If the allocation fails
 */
void	*ft_calloc(size_t n, size_t size);

/**
 * @brief Searches in the memory area for the first occurrence of the character
 * c. Both c and the bytes of the memory area pointed to s are interpreted
 * as unsigned char.
 *
 * @param s The pointer to the area to search
 * @param c The character to search for
 * @param n The size of the area
 * @return void* The pointer to the matching byte or NULL if the character does
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares the first n bytes of the memory areas s1 and s2.
 *
 * @param ptr1 The pointer to the first area
 * @param ptr2 The pointer to the second area
 * @param num The size of the areas
 * @return int The function returns an integer less than, equal to, or greater
 * than zero if the first n bytes of s1 is found, respectively, to be less than,
 * to match, or be greater than the first n bytes of s2.
 */
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

/**
 * @brief Copies n bytes from memory area src to memory area dest. The memory
 * areas must not overlap.
 *
 * @param dest The pointer to the destination area
 * @param src The pointer to the source area
 * @param n The size of the area
 * @return void* The function returns its first argument
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copies n bytes from memory area src to memory area dest. The memory
 * areas may overlap.
 *
 * @param dest The pointer to the destination area
 * @param src The pointer to the source area
 * @param n The size of the area
 * @return void* The function returns its first argument
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Fills the first n bytes of the memory area pointed to by s with the
 * constant byte c.
 *
 * @param b The pointer to the area to fill
 * @param c The character to place in the area
 * @param len The size of the area
 * @return void* The function returns its first argument
 */
void	*ft_memset(void *b, int c, size_t len);

#endif