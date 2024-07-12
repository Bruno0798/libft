/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:12:20 by bsousa-d          #+#    #+#             */
/*   Updated: 2024/07/12 07:28:16 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERT_H
# define FT_CONVERT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

/**
 * @brief Converts a string to an integer
 *
 * @param str The pointer of the string to convert
 * @return int The integer converted from the string
 */
int		ft_atoi(const char *str);

/**
 * @brief Converts an integer to a string
 *
 * @param n The integer to convert
 * @return char* The converted integer
 */
char	*ft_itoa(int n);

/**
 * @brief Converts an uppercase character to a lowercase character
 *
 * @param c The character to convert
 * @return int The converted character
 */
int		ft_tolower(int c);

/**
 * @brief Converts a lowecase character to an uppercase character
 *
 * @param c The character to convert
 * @return int The converted character
 */
int		ft_toupper(int c);

#endif