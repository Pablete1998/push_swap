/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:57:50 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/18 18:02:32 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

int	main(int argv, char **argvs)
{
	char	**result;
	int		i;

	i = 0;
	result = finalbuilt(argv, argvs);
	ft_printf("%s", result[1]);
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}
