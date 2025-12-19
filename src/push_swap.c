/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:57:50 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/19 14:28:40 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"


int	main(int argv, char **argvs)
{
	char	**stack_a;
	int		i;

	i = 0;
	stack_a = finalbuilt(argv, argvs);
	ft_printf("%s", stack_a[1]);
	while (stack_a[i])
	{
		free(stack_a[i]);
		i++;
	}
	free(stack_a);
}
