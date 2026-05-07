/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:11:05 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/07 11:13:12 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putnbr_unsigned_long_big(unsigned long long n, int *tl)
{
	if (n >= 16)
		putnbr_unsigned_long_big (n / 16, tl);
	write (1, &"0123456789ABCDEF"[n % 16], 1);
	(*tl)++;
}
