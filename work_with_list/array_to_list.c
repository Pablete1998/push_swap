/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_to_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:00:21 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/29 18:42:30 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_node	*array_to_list(char **stack)
{
	int		i;
	int		n;
	t_node	*stack_a;

	n = ft_atoi(stack[0]);
	stack_a = lst_new_node(n);
	i = 1;
	while (stack[i])
	{
		n = ft_atoi(stack[i]);
		lst_add_back(&stack_a, lst_new_node(n));
		i++;
	}
	freeator(stack);
	return (stack_a);
}
