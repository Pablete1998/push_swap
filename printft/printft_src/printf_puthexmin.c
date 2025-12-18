/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_puthexmin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:52:58 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/28 13:15:07 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_puthexmin(unsigned int n, char *basemin)
{
	char	*hex;
	int		i;
	int		count;

	if (n == 0)
		return (count = printf_putstr("0"));
	hex = malloc(17 * sizeof(char));
	if (!hex)
		return (count = printf_putstr("(nil)"));
	i = 0;
	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n)
	{
		hex[i++] = basemin[n % 16];
		n /= 16;
	}
	while (i--)
		count += write(1, &hex[i], 1);
	free (hex);
	return (count);
}
