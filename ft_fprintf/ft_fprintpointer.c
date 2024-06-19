/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintpointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:54:14 by bsousa-d          #+#    #+#             */
/*   Updated: 2024/06/19 12:55:40 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(unsigned long num)
{
	int	i;

	i = 2;
	while (num != 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

int	ft_fprintpointer_start(unsigned long nbr, int fd)
{
	if (nbr == 0)
		return (write(fd, "(nil)", 5));
	write(fd, "0x", 2);
	return (ft_fprintpointer(nbr, fd));
}

int	ft_fprintpointer(unsigned long nbr, int fd)
{
	char				*hexa;

	hexa = "0123456789abcdef";
	if (nbr < 16)
		ft_fputchar(*(hexa + nbr), fd);
	else
	{
		ft_fprintpointer(nbr / 16, fd);
		ft_fprintpointer(nbr % 16, fd);
	}
	return (len(nbr));
}
