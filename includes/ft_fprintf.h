/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsousa-d <bsousa-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:00:35 by bsousa-d          #+#    #+#             */
/*   Updated: 2024/06/19 13:00:39 by bsousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FPRINT_H
# define FT_FPRINT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_fprintf(int fd, const	char *format, ...);
int	formats(const char format, va_list args, int nw, int fd);
int	ft_fprinthexa(unsigned int nbr, int fd);
int	ft_fprinthexa_upp(unsigned int nbr, int fd);
int	ft_fprintpointer_start(unsigned long nbr, int fd);
int	ft_fprintpointer(unsigned long nbr, int fd);
int	ft_fput_unsi_nbr(unsigned int n, int fd);
int	ft_fputchar(char c, int fd);
int	ft_fputnbr(int n, int fd);
int	ft_fputstr(char *s, int fd);
#endif