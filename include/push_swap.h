/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:13:59 by pabserra          #+#    #+#             */
/*   Updated: 2026/01/15 17:32:58 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_node
{
	int				index;
	int				value;
	struct s_node	*next;
}	t_node;

int		chequeator(int numb, int simbols, int original, char size_word);
int		aren_diff(char **argument);
int		check_simbols(char **argument);
char	but_not_to_much(char **argument);
int		all_number(char **argument);
int		the_real_parse(char **argument);
char	**finalbuilt(int argv, char **argvs);
char	**make_it_real(int i, char **argument);
t_node	*array_to_list(char **stack);
void	freeator(char **arr);
void	lst_add_back(t_node **lst, t_node *node);
void	lst_add_front(t_node **lst, t_node *node);
void	lst_clear(t_node **lst);
void	lst_delone(t_node *lst);
void	lst_iter(t_node *lst, void (*f)(int));
t_node	*lst_last(t_node *lst);
t_node	*lst_new_node(int value);
int		lst_size(t_node *lst);
void	freator_stack(t_node **stack);
void	list_change_pa(t_node **stack_a, t_node **stack_b);
void	list_change_pb(t_node **stack_a, t_node **stack_b);
void	list_change_ra(t_node **stack_a);
void	list_change_rb(t_node **stack_b);
void	list_change_rr(t_node **stack_a, t_node **stack_b);
void	list_change_rra(t_node **stack_a);
void	list_change_rrb(t_node **stack_b);
void	list_change_rrr(t_node **stack_a, t_node **stack_b);
void	list_change_sa(t_node **stack_a);
void	list_change_sb(t_node **stack_b);
void	list_change_ss(t_node **stack_a, t_node **stack_b);
int		is_in_order(t_node *stack);
int		for_three(t_node **stack);
void	for_four_or_five(t_node **stack_a, t_node **stack_b);
void	radix_sorting(t_node **stack_a, t_node **stack_b);
void	add_index(t_node *stack);

#endif
