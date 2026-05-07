/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 02:23:54 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/07 10:56:51 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *tl);
void	ft_putstr(char *str, int *tl);
int		ft_strlen(char *str);
void	putnbr_base(int n, char *base, int *tl);
void	print_conversion(va_list *ap, int *tl, char *format);
void	print_c(va_list *ap, int *tl);
void	print_s(va_list *ap, int *tl);
void	print_p(va_list *ap, int *tl);
void	print_di(va_list *ap, int *tl);
void	print_u(va_list *ap, int *tl);
void	print_x(va_list *ap, int *tl);
void	print_lx(va_list *ap, int *tl);
void	print_per(int *tl);
void	putnbr_unsigned(unsigned int n, int *tl);
void	putnbr_unsigned_long(unsigned long long n, int *tl);
int		ft_printf(const char *format, ...);
void	putnbr_unsigned_long_big(unsigned long long n, int *tl);

#endif
