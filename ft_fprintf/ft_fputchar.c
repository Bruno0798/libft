/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:54:14 by bsousa-d          #+#    #+#             */
/*   Updated: 2024/06/19 12:55:50 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_fputchar(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
