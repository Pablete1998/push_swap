/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:51:33 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/27 19:49:19 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ftputchar(char c)
{
	int	a;

	a = 1;
	write(1, &c, 1);
	return (a);
}

static int	count_len(int i)
{
	int	count;

	if (i < 0)
	{
		count = 2;
		i *= -1;
	}
	else
		count = 1;
	while ((i / 10) > 0)
	{
		count += 1;
		i = i / 10;
	}
	return (count);
}

static void	ft_print_putnbr(int n)
{
	int	i;

	i = n;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		printf_putnbr(n / 10);
		printf_putnbr(n % 10);
	}
	else
	{
		ftputchar(n + '0');
	}
}

int	printf_putnbr(int n)
{
	int	count;
	int	i;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	i = n;
	count = count_len(i);
	ft_print_putnbr(n);
	return (count);
}
