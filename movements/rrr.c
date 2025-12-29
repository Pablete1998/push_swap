/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:22:19 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/29 16:52:58 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	list_change_rrr(t_node **stack_a, t_node **stack_b)
{
	list_change_rra(stack_a);
	list_change_rrb(stack_b);
	ft_printf("rrr\n");
}
