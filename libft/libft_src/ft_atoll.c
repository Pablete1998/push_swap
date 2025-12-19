/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabserra <pabserra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:27:19 by pabserra          #+#    #+#             */
/*   Updated: 2025/12/19 18:36:34 by pabserra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_atoll(char *nptr)
{
	long long		i;
	long long		j;
	long long		l;

	l = 1;
	j = 0;
	i = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			l = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		j *= 10;
		j += nptr[i] - '0';
		i++;
	}
	return (l * j);
}