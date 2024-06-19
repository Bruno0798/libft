/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprinthexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:54:14 by bsousa-d          #+#    #+#             */
/*   Updated: 2024/06/19 12:55:29 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(unsigned int num)
{
	int	i;

	i = 0;
	if (num == 0)
		i++;
	while (num != 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

int	ft_fprinthexa(unsigned int nbr, int fd)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nbr < 16)
		ft_fputchar(*(hexa + nbr), fd);
	else
	{
		ft_fprinthexa(nbr / 16, fd);
		ft_fprinthexa(nbr % 16, fd);
	}
	return (len(nbr));
}
