/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct_stack_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:36:10 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/22 18:02:21 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**build_stack_b(char **stack1)
{
	char	**stack2;
	int		i;

	i = 0;
	while (stack1[i] != NULL)
	{
		stack2[i] = 0;
		i++;
	}
	return (stack2);
}
