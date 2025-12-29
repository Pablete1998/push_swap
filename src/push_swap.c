/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:57:50 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/29 19:09:32 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	stack_reader(t_node *stack_a, t_node *stack_b)
{
	if (!stack_a)
		ft_printf("empty");
	while (stack_a)
	{
		ft_printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	while (stack_b)
	{
		ft_printf("%d\n", stack_b->value);
		stack_b = stack_b->next;
	}
}

int	main(int argc, char **argv)
{
	char	**stack;
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		return (0);
	stack = finalbuilt(argc, argv);
	stack_a = array_to_list(stack);
	stack_b = NULL;
	stack_reader(stack_a, stack_b);
	freator_stack(stack_a);
	freator_stack(stack_b);
	return (0);
}
