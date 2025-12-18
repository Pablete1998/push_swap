/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:18:36 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/28 13:32:25 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_ptr(void *n, int count)
{
	size_t	addr;
	char	*hex;
	char	*base;
	int		i;

	if (n == NULL)
		return (count = printf_putstr("(nil)"));
	hex = malloc(17 * sizeof(char));
	if (!hex)
		return (count = printf_putstr("(nil)"));
	i = 0;
	base = "0123456789abcdef";
	addr = (size_t)n;
	if (!addr)
		return (write(1, "0x0", 3));
	count += write(1, "0x", 2);
	while (addr)
	{
		hex[i++] = base[addr % 16];
		addr /= 16;
	}
	while (i--)
		count += write(1, &hex[i], 1);
	free (hex);
	return (count);
}
