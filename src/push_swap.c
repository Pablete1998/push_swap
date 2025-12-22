/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:57:50 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/22 21:46:06 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

int	main(int argc, char **argv)
{
	char	**stack;
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		return (0);
	stack = finalbuilt(argc, argv);
	stack_a = array_to_list(stack);
	stack_b = NULL;
	return (0);
}
