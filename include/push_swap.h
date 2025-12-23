/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:13:59 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/23 19:45:52 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

int		the_real_parse(char **argument);
char	**finalbuilt(int argv, char	**argvs);
char	**make_it_real(int i, char **argument);
t_node	*array_to_list(char **stack);
void	lst_add_back(t_node **lst, t_node *node);
void	lst_add_front(t_node **lst, t_node *node);
void	lst_clear(t_node **lst);
void	lst_delone(t_node *lst);
void	lst_iter(t_node *lst, void (*f)(int));
t_node	*lst_last(t_node *lst);
t_node	*lst_new_node(int value);
int		lst_size(t_node *lst);

#endif
