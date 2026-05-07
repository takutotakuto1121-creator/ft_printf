/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 02:24:01 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/07 11:01:09 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *tl)
{
	write (1, &c, 1);
	(*tl)++;
}

void	ft_putstr(char *str, int *tl)
{
	int	i;

	if (!str)
	{
		write (1, "(null)", 6);
		*tl += 6;
		return ;
	}
	i = 0;
	while (str[i])
		i++;
	write (1, str, i);
	*tl += i;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	putnbr_base(int n, char *base, int *tl)
{
	long	nb;
	int		digit;

	nb = n;
	digit = ft_strlen (base);
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
		(*tl)++;
	}
	if (nb >= digit)
		putnbr_base (nb / digit, base, tl);
	write (1, &base[nb % digit], 1);
	(*tl)++;
}

void	print_conversion(va_list *ap, int *tl, char *format)
{
	if (*format == 'c')
		print_c (ap, tl);
	else if (*format == 's')
		print_s (ap, tl);
	else if (*format == 'p')
		print_p (ap, tl);
	else if (*format == 'd' || *format == 'i')
		print_di (ap, tl);
	else if (*format == 'u')
		print_u (ap, tl);
	else if (*format == 'x')
		print_x (ap, tl);
	else if (*format == 'X')
		print_lx (ap, tl);
	else if (*format == '%')
		print_per (tl);
}
