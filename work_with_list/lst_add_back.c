/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:46:53 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/23 18:57:59 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add_back(t_node **lst, t_node *node)
{
	t_node	*temp;

	if (!lst)
		return ;
	if (!(*lst))
	{
		(*lst) = node;
		return ;
	}
	temp = lst_last(*lst);
	temp->next = node;
}
