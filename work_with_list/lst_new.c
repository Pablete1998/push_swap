/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:04:59 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/22 21:52:50 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*lst_new_node(int value)
{
	t_node	*node1;

	node1 = malloc(sizeof (t_node));
	if (!node1)
		return (NULL);
	node1->value = value;
	node1->next = NULL;
	return (node1);
}
