/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fput_unsi_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:54:14 by bsousa-d          #+#    #+#             */
/*   Updated: 2024/06/19 12:55:45 by bsousa-d         ###   ########.fr       */
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
		num = num / 10;
		i++;
	}
	return (i);
}

int	ft_fput_unsi_nbr(unsigned int n, int fd)
{
	int		k;
	char	c;

	k = len(n);
	if (n < 10)
	{
		c = n + '0';
		ft_fputchar(c, fd);
	}
	else
	{
		ft_fput_unsi_nbr(n / 10, fd);
		ft_fput_unsi_nbr(n % 10, fd);
	}
	return (k);
}
