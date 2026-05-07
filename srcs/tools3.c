/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 02:24:08 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/07 10:55:00 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_x(va_list *ap, int *tl)
{
	unsigned int		n;

	n = va_arg (*ap, unsigned int);
	putnbr_unsigned_long (n, tl);
}

void	print_lx(va_list *ap, int *tl)
{
	unsigned int		n;

	n = va_arg (*ap, unsigned int);
	putnbr_unsigned_long_big (n, tl);
}

void	print_per(int *tl)
{
	ft_putchar ('%', tl);
}

void	putnbr_unsigned(unsigned int n, int *tl)
{
	if (n >= 10)
		putnbr_unsigned (n / 10, tl);
	write (1, &"0123456789"[n % 10], 1);
	(*tl)++;
}

void	putnbr_unsigned_long(unsigned long long n, int *tl)
{
	if (n >= 16)
		putnbr_unsigned_long (n / 16, tl);
	write (1, &"0123456789abcdef"[n % 16], 1);
	(*tl)++;
}
