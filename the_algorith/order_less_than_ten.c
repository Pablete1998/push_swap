/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_less_than_ten.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:11:45 by pabserra          #+#    #+#             */
/*   Updated: 2026/01/14 17:10:40 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

int	for_three(t_node **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (a > b && b < c && a < c)
		list_change_sa(stack);
	else if (a > b && b < c && a > c)
		list_change_rra(stack);
	else if (a < b && b > c && a > c)
		list_change_sa(stack);
	else if (a < b && b > c && a < c)
	{
		list_change_sa(stack);
		list_change_ra(stack);
	}
	else if (a > b && b > c && a > c)
	{
		list_change_sa(stack);
		list_change_rra(stack);
	}
	return (1);
}

int	find_smaller(t_node *stack_a)
{
	int	min;
	int	index;
	int	i;

	min = stack_a->value;
	index = 0;
	i = 0;
	while (stack_a)
	{
		if (stack_a->value < min)
		{
			min = stack_a->value;
			index = i;
		}
		stack_a = stack_a->next;
		i++;
	}
	return (index);
}

void	min_to_top(t_node **stack_a, int min_index)
{
	int	size;
	int	r;

	size = lst_size(*stack_a);
	if (min_index <= size / 2)
	{
		while (min_index-- > 0)
			list_change_ra(stack_a);
	}
	else
	{
		r = size - min_index;
		while (r-- > 0)
			list_change_rra(stack_a);
	}
}

void	for_four_or_five(t_node **stack_a, t_node **stack_b)
{
	int	size;
	int	min_index;

	size = lst_size(*stack_a);
	while (size > 3)
	{
		min_index = find_smaller(*stack_a);
		min_to_top(stack_a, min_index);
		list_change_pb(stack_a, stack_b);
		size--;
	}
	for_three(stack_a);
	while (*stack_b)
		list_change_pa(stack_a, stack_b);
}
