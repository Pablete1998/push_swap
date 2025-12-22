/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:52:38 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/20 20:25:49 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *value)
{
	t_list	*node1;

	node1 = malloc(sizeof (t_list));
	if (!node1)
		return (NULL);
	node1->value = value;
	node1->next = NULL;
	return (node1);
}
