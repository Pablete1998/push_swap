/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_less_than_ten.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:11:45 by pabserra          #+#    #+#             */
/*   Updated: 2026/01/02 21:00:03 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

int	for_three(t_node **stack)
{
	int	a;
	int b;
	int c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (a > b && b < c &&  a < c)
		list_change_sa(stack);
	else if (a > b && b < c && a > c)
		list_change_rra(stack);
	else if (a < b && b > c && a > c)
		list_change_rra(stack);
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

int	for_five(t_node **stack_a, t_node **stack_b)
{
	int	i;

	while (*stack_a && (*stack_a)->next)
	{
	}
}
