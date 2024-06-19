/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:54:14 by bsousa-d          #+#    #+#             */
/*   Updated: 2024/06/19 12:55:58 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int num)
{
	int	i;

	i = 0;
	if (num < 0 || num == 0)
		i++;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int	ft_fputnbr(int n, int fd)
{
	int	i;

	i = len(n);
	if (n == -2147483648)
	{
		ft_fputchar('-', fd);
		ft_fputchar('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_fputchar('-', fd);
		n = -n;
	}
	if (n < 10)
	{
		n = n + '0';
		ft_fputchar(n, fd);
	}
	else
	{
		ft_fputnbr(n / 10, fd);
		ft_fputnbr(n % 10, fd);
	}
	return (i);
}
