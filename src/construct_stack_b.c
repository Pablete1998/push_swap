/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct_stack_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:36:10 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/19 14:41:16 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**build_stack_b(char **stack_a)
{
	char	**stack_b;
	int		i;

	i = 0;
	while (stack_a[i] != NULL)
	{
		stack_b[i] = 0;
		i++;
	}
	return (stack_b);
}
