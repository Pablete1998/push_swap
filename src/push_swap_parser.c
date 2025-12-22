/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:21:29 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/22 21:49:30 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

int	all_number(char	**argument)
{
	int	i;
	int	ok;
	int	j;

	i = 0;
	ok = 1;
	while (argument[i] != NULL && ok == 1)
	{
		j = 0;
		while (argument[i][j] != '\0')
		{
			if (!ft_isdigit(argument[i][j]) &&
				(argument[i][j] != '-') && (argument[i][j] != '+'))
				return (-1);
			if (ft_isdigit(argument[i][j]) &&
				(!ft_isdigit(argument[i][j + 1]))
					&& (argument[i][j + 1] != 32)
						&& (argument[i][j + 1] != '\0'))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

char	but_not_to_much(char	**argument)
{
	long	n;
	int		i;

	i = 0;
	while (argument[i] != NULL)
	{
		n = ft_atoll(argument[i]);
		if (n > 2147483647 || n < -2147483648)
			return (1);
		i++;
	}
	return (48);
}

int	check_simbols(char **argument)
{
	int	i;
	int	j;

	i = 0;
	while (argument[i] != NULL)
	{
		j = 0;
		while (argument[i][j] != '\0')
		{
			if (argument[i][j] == '-' || argument[i][j] == '+')
			{
				if (argument[i][j + 1] == '-' || argument[i][j + 1] == '+')
					return (-1);
				if ((argument[i][j + 1]) == '\0'
					|| !ft_isdigit(argument[i][j + 1]))
					return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	aren_diff(char **argument)
{
	int		i;
	int		j;

	i = 0;
	while (argument[i] != NULL)
	{
		j = i + 1;
		while (argument[j] != NULL)
		{
			if ((ft_strcmp(argument[i], argument[j]) == 0)
				&& (argument[j] != NULL))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	the_real_parse(char	**argument)
{
	int		numb;
	char	size_word;
	int		original;
	int		simbols;
	char	**new_array;

	new_array = make_it_real(0, argument);
	numb = all_number(new_array);
	size_word = but_not_to_much(new_array);
	simbols = check_simbols(new_array);
	original = aren_diff(new_array);
	if (size_word != 48)
		ft_printf("ahí hay un numero demasiao largo ¿o qué?\n");
	if (simbols != 0)
		ft_printf("vigila esos simbolicos\n");
	if (numb != 0)
		ft_printf("no son todos numeros\n");
	if (original != 0)
		ft_printf("los  hay repes");
	return (0);
}
