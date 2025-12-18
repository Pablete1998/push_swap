/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:23:24 by pabserra          #+#    #+#             */
/*   Updated: 2025/10/28 13:36:40 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	printf_putchar(char c);
int	printf_putstr(char *str);
int	printf_putnbr(int n);
int	printf_putnbru(unsigned int n);
int	printf_ptr(void *n, int count);
int	printf_puthexmax(unsigned int n, char *basemax);
int	printf_puthexmin(unsigned int n, char *basemin);

#endif