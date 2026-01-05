/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:57:27 by pabserra          #+#    #+#             */
/*   Updated: 2026/01/02 18:11:08 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

int	is_in_order(t_node *stack)
{
	while (stack  && stack->next)
	{
		if (stack->value > stack->next->value)
		{
			return (0);
		}
		stack = stack->next;
	}
	return (1);
}