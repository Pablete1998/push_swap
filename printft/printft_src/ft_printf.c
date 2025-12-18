/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:53:56 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/09 13:46:27 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	catcher_format(va_list variadic, const char *str, size_t i)
{
	int		count;
	char	*basemax;
	char	*basemin;

	basemax = "0123456789ABCDEF";
	basemin = "0123456789abcdef";
	count = 0;
	str = (char *)str;
	if (str[i] == '%')
		count = write(1, "%", 1);
	else if (str[i] == 'c')
		count = printf_putchar(va_arg(variadic, int));
	else if (str[i] == 's')
		count = printf_putstr(va_arg(variadic, char *));
	else if ((str[i] == 'd') || (str[i] == 'i'))
		count = printf_putnbr(va_arg(variadic, int));
	else if (str[i] == 'p')
		count = printf_ptr(va_arg(variadic, void *), count);
	else if (str[i] == 'u')
		count = printf_putnbru(va_arg(variadic, unsigned int));
	else if (str[i] == 'x')
		count = printf_puthexmin(va_arg(variadic, unsigned int), basemin);
	else if (str[i] == 'X')
		count = printf_puthexmax(va_arg(variadic, unsigned int), basemax);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list			variadic;
	int				count;
	size_t			i;

	i = 0;
	count = 0;
	va_start(variadic, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += catcher_format(variadic, str, i);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(variadic);
	return (count);
}

/* int	main(void)
{
	int					a;
	char				*m;
	char				*n;
	char				c;
	unsigned int		l;

	m  = 0;
	n = 0;
	l = 0;
	c = 'r';
	a = ft_printf("%x", l);
	ft_printf("\n%d", a);
	printf("\n\n");
	a = printf("%x", l);
	printf("\n%d", a);
} */
