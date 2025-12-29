/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:47:53 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/29 16:28:13 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	**list_change_rr(t_node **stack_a, t_node **stack_b)
{
	list_change_ra(stack_a);
	list_change_rb(stack_b);
	ft_printf("rr\n");
}
