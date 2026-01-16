/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_real_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:40:54 by pabserra          #+#    #+#             */
/*   Updated: 2026/01/15 16:51:03 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

int	the_real_parse(char	**argument)
{
	int		numb;
	char	size_word;
	int		original;
	int		simbols;
	char	**new_array;

	new_array = argument;
	numb = all_number(new_array);
	size_word = but_not_to_much(new_array);
	simbols = check_simbols(new_array);
	original = aren_diff(new_array);
	if (chequeator(numb, simbols, original, size_word) != 0)
		return (1);
	return (0);
}
