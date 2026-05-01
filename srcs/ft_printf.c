/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 02:23:58 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/02 02:36:30 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		tl;

	va_start (ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			print_conversion (&ap, &tl, (char *)(format + 1));
			format += 2;
		}
		else
		{
			ft_putchar (*format, &tl);
			format++;
		}
	}
	return (tl);
}
