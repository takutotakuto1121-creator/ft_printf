/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 02:24:11 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/08 16:53:59 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
// #include <stdio.h>
// #include <limits.h>

// int	main(void)
// {
// 	int	*p;
// 	int	re;
// 	int	re1;
// 	p = &re;

// 	ft_printf("--ft_printf--\n");
// 	ft_printf("hello world!\n");
// 	ft_printf("c -> %c\n", 'A');
// 	ft_printf("s -> %s\n", "string");
// 	ft_printf("p -> %p\n", p);
// 	ft_printf("d -> %d\n", 3);
// 	ft_printf("i -> %i\n", 192);
// 	ft_printf("u -> %u\n", -100);
// 	ft_printf("x -> %x\n", 810);
// 	ft_printf("X -> %X\n", 810);
// 	ft_printf("%% -> %%\n");
// 	ft_printf("%c%s%p%d%i%u%x%X%%\n", 'c', "----", p, 810, 810, 810, 810, 810);
// 	re = ft_printf ("%s, %d, %x\n", "return value", 9289, 19874);
// 	ft_printf ("%d\n", re);
// 	ft_printf("\n");
// 	printf("--printf--\n");
// 	printf("hello world!\n");
// 	printf("c -> %c\n", 'A');
// 	printf("s -> %s\n", "string");
// 	printf("p -> %p\n", p);
// 	printf("d -> %d\n", 3);
// 	printf("i -> %i\n", 192);
// 	printf("u -> %u\n", -100);
// 	printf("x -> %x\n", 810);
// 	printf("X -> %X\n", 810);
// 	printf("%% -> %%\n");
// 	printf("%c%s%p%d%i%u%x%X%%\n", 'c', "----", p, 810, 810, 810, 810, 810);
// 	re1 = printf ("%s, %d, %x\n", "return value", 9289, 19874);
// 	printf ("%d\n", re);
// 	printf("\n");

// 	printf("--test:c--\n");
// 	int rec1 = ft_printf("%c", '0');
// 	printf("%d", rec1);
// 	printf("\n");
// 	int rec2 = printf("%c", '0');
// 	printf("%d\n", rec2);
// 	printf("\n");

// 	printf("--test:s--\n");
// 	int rec3 = ft_printf("%s", "string");
// 	printf("%d", rec3);
// 	printf("\n");
// 	int rec4 = printf("%s", "string");
// 	printf("%d", rec4);
// 	printf("\n");
// 	int rec5 = ft_printf("%s", (char *)NULL);
// 	printf("%d", rec5);
// 	printf("\n");
// 	int rec6 = printf("%s", (char *)NULL);
// 	printf("%d", rec6);
// 	printf("\n");

// 	printf("--test:p\n");
// 	int	re7 = ft_printf("%p, %p\n", -1, 0);
// 	printf("%d\n", re7);
// 	// int	re8 = printf("%p, %p\n", -1, 0);
// 	// printf("%d\n", re8);
// 	printf("\n");

// 	printf("--test:d,i--\n");
// 	int	re9 = ft_printf("%d, %i, %d, %i, %d\n", 1, -1, 0, INT_MIN, INT_MAX);
// 	printf("%d\n", re9);
// 	int	re10 = printf("%i, %d, %i, %d, %i\n", 1, -1, 0, INT_MIN, INT_MAX);
// 	printf("%d\n\n", re10);

// 	printf("--test:u--\n");
// 	int	re11 = ft_printf("%u %u %u %u %u\n", 1, -1, 0, INT_MIN, INT_MAX);
// 	printf("%d\n", re11);
// 	int	re12 = printf("%u %u %u %u %u\n", 1, -1, 0, INT_MIN, INT_MAX);
// 	printf("%d\n\n", re12);

// 	printf("--test:x--\n");
// 	int	re13 = ft_printf("%x %x %x %x %x\n", 1, -1, 0, INT_MIN, INT_MAX);
// 	printf("%d\n", re13);
// 	int	re14 = printf("%x %x %x %x %x\n", 1, -1, 0, INT_MIN, INT_MAX);
// 	printf("%d\n\n", re14);

// 	printf("--test:X--\n");
// 	int	re15 = ft_printf("%X %X %X %X %X\n", 1, -1, 0, INT_MIN, INT_MAX);
// 	printf("%d\n", re15);
// 	int	re16 = printf("%X %X %X %X %X\n", 1, -1, 0, INT_MIN, INT_MAX);
// 	printf("%d\n\n", re16);
// }
