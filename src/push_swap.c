/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:57:50 by pabserra          #+#    #+#             */
/*   Updated: 2026/01/05 17:39:22 by pabserra         ###   ########.fr       */
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

int	push_swap(t_node **stack_a, t_node **stack_b)
{
	int	size;

	if (is_in_order(*stack_a))
		return (0);
	size = lst_size(*stack_a);
	if (size == 2)
		list_change_sa(stack_a);
	else if (size == 3)
		for_three(stack_a);
	else if (size <= 5)
		for_four_or_five(stack_a, stack_b);
	else
		radix_sorting(stack_a, stack_b);
	return (1);
}

/* int	main(int argc, char **argv)
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
	is_in_order(stack_a);
	freator_stack(stack_a);
	freator_stack(stack_b);
	return (0);
} */

int	main(int argc, char **argv)
{
	char	**stack;
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		return (0);
	stack = finalbuilt(argc, argv);
	stack_a = array_to_list(stack);
	add_index(stack_a);
	push_swap(&stack_a, &stack_b);
	freator_stack(&stack_a);
	return (0);
}
