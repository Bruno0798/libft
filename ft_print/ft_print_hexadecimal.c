/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:40:25 by bsousa-d          #+#    #+#             */
/*   Updated: 2024/07/08 16:19:56 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	print_lenght(unsigned int c)
{
	int	len;

	len = 0;
	while (c)
	{
		len++;
		c /= 16;
	}
	return (len);
}

static void	print_hexadecimal(unsigned int c, char casing)
{
	if (c >= 16)
	{
		print_hexadecimal(c / 16, casing);
		print_hexadecimal(c % 16, casing);
	}
	else
	{
		if (c < 10)
			ft_putchar_fd((c + 48), 1);
		else
		{
			if (casing == 'a')
				ft_putchar_fd((c - 10 + 'a'), 1);
			else if (casing == 'A')
				ft_putchar_fd((c - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hexadecimal(unsigned int c, char casing)
{
	if (c == 0)
		return (write(1, "0", 1));
	else
	{
		print_hexadecimal(c, casing);
		return (print_lenght(c));
	}
}
