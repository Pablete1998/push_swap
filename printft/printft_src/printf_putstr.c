/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:51:26 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/27 15:45:16 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_putstr(char *str)
{
	int		i;
	char	*err;

	err = "(null)";
	i = 0;
	if (str == NULL)
	{
		while (err[i] != '\0')
		{
			write(1, &err[i], 1);
			i++;
		}
		return (i);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
