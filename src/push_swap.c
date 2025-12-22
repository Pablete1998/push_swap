/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:57:50 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/22 18:13:46 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

int	main(int argv, char **argvs)
{
	char	**stack;
	int		i;

	i = 0;
	stack = finalbuilt(argv, argvs);
	ft_printf("%s", stack[1]);
	while (stack[i])
	{
		free(stack[i]);
		i++;
	}
	free(stack);
}
