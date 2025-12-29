/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:46:22 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/29 16:30:31 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	**list_change_ss(t_node **stack_a, t_node **stack_b)
{
	list_change_sa(stack_a);
	list_change_sb(stack_b);
	ft_printf("ss\n");
}
