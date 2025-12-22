/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_construct.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:01:49 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/22 21:50:24 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

char	**make_it_real(int i, char **argument)
{
	int		j;
	int		a;
	char	**new_numb;
	int		count;

	count = 0;
	while (argument[count] != NULL)
		count++;
	new_numb = malloc((count + 1) * sizeof(char *));
	if (!new_numb)
		return (NULL);
	while (argument[i] != NULL)
	{
		j = 0;
		a = 0;
		while (argument[i][j] == '0')
			j++;
		new_numb[i] = malloc(ft_strlen(argument[i]) - j + 1);
		while (argument[i][j] != '\0')
			new_numb[i][a++] = argument[i][j++];
		new_numb[i][a] = '\0';
		i++;
	}
	new_numb[i] = NULL;
	return (new_numb);
}

char	*all_united(char **arguments)
{
	int		i;
	char	*together;
	char	*temp;

	i = 1;
	together = ft_strdup(arguments[0]);
	while (arguments[i] != NULL)
	{
		temp = ft_strjoin(together, " ");
		free(together);
		if (!temp)
			return (NULL);
		together = ft_strjoin(temp, arguments[i]);
		free(temp);
		if (!together)
			return (NULL);
		i++;
	}
	return (together);
}

char	**numerator_cool(char **argument, int value)
{
	int	i;

	i = 0;
	the_real_parse(argument);
	while (argument[i] != NULL)
	{
		value = ft_atoi(argument[i]);
		free(argument[i]);
		argument[i] = ft_itoa(value);
		i++;
	}
	return (argument);
}

char	**finalbuilt(int argv, char	**argvs)
{
	char	**arguments;
	char	**argument;
	int		i;
	int		value;
	char	*full_united;

	i = 0;
	value = 0;
	arguments = malloc(sizeof(char *) * (argv));
	if (!arguments)
		return (NULL);
	while (++i < argv)
	{
		arguments[value] = argvs[i];
		value++;
	}
	arguments[value] = NULL;
	full_united = all_united(arguments);
	free(arguments);
	if (!full_united)
		return (NULL);
	argument = ft_split(full_united, ' ');
	free(full_united);
	return (numerator_cool(argument, value), argument);
}
