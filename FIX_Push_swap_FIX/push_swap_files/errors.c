/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 08:35:32 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/11 13:30:33 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

int		sorted(t_node **list)
{
	t_node *a;

	a = *list;
	while (a->next)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}

int		duplicate(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < i)
		{
			if (ft_strequ(av[i], av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		e(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((ft_isdigit(str[i])) || (str[i] == ' ' || str[i] == '-'))
			i++;
		else
			return (0);
	}
	return (1);
}

void	lim(t_node **list)
{
	long long max;
	long long min;
	t_node	*tsil;

	tsil = *list;
	max = 2147483647;
	min = -2147483649;
	while (tsil)
	{
		if ((tsil->data < min) || (tsil->data > max))
		{
			ft_putendl("Error");
			exit(0);
		}
		tsil = tsil->next;
	}
}
