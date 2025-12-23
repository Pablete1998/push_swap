/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:49:48 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/23 19:41:43 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_clear(t_node **lst)
{
	t_node	*temp;

	if (!*lst || !lst)
		return ;
	while ((*lst))
	{
		temp = (*lst)->next;
		lst_delone(*lst);
		*lst = temp;
	}
}
