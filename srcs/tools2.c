/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 02:24:05 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/08 16:53:27 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_c(va_list *ap, int *tl)
{
	char	c;

	c = va_arg (*ap, int);
	ft_putchar (c, tl);
}

void	print_s(va_list *ap, int *tl)
{
	char	*s;

	s = va_arg (*ap, char *);
	ft_putstr (s, tl);
}

void	print_p(va_list *ap, int *tl)
{
	void				*p;
	unsigned long long	a;

	p = va_arg (*ap, void *);
	a = (unsigned long long)p;
	ft_putstr ("0x", tl);
	putnbr_unsigned_long (a, tl);
}

void	print_di(va_list *ap, int *tl)
{
	int		n;
	char	*base;

	n = va_arg (*ap, int);
	base = "0123456789";
	putnbr_base (n, base, tl);
}

void	print_u(va_list *ap, int *tl)
{
	unsigned int	nb;

	nb = va_arg (*ap, unsigned int);
	putnbr_unsigned(nb, tl);
}
