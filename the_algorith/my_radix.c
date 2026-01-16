/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:17:44 by pabserra          #+#    #+#             */
/*   Updated: 2026/01/15 17:29:28 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	add_index(t_node *stack)
{
	t_node	*i;
	t_node	*j;
	int		index;

	i = stack;
	while (i)
	{
		index = 0;
		j = stack;
		while (j)
		{
			if (j->value < i->value)
				index++;
			j = j->next;
		}
		i->index = index;
		i = i->next;
	}
}

void	radix_sorting(t_node **stack_a, t_node **stack_b)
{
	int	size;
	int	max_bts;
	int	i;
	int	j;

	size = lst_size(*stack_a);
	max_bts = 0;
	i = 0;
	while ((size -1) >> max_bts)
		max_bts++;
	while (i < max_bts)
	{
		j = 0;
		while (j < size)
		{
			if (((*stack_a)->index >> i) & 1)
				list_change_ra(stack_a);
			else
				list_change_pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			list_change_pa(stack_a, stack_b);
		i++;
	}
}
