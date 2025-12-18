/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putnbru.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:32:06 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/27 20:49:00 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ftputcharu(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	count_lenu(unsigned int i)
{
	int	count;

	count = 1;
	while ((i / 10) > 0)
	{
		count += 1;
		i = i / 10;
	}
	return (count);
}

static void	ft_print_putnbru(unsigned int n)
{
	if (n > 9)
	{
		printf_putnbru(n / 10);
		printf_putnbru(n % 10);
	}
	else
	{
		ftputcharu(n + '0');
	}
}

int	printf_putnbru(unsigned int n)
{
	int	count;
	int	i;

	i = n;
	count = count_lenu(i);
	ft_print_putnbru(n);
	return (count);
}
