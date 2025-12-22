/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:48:03 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/20 20:48:26 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*lst_last(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
	{
		lst = lst->next;
	}
	return (lst);
}