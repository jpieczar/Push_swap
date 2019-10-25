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

int		duplicate(t_node **list)
{
	int		i;
	int		j;
	t_node	*a;
	t_node	*b;

	i = 0;
	j = 0;
	a = *list;
	b = *list;
	while (a)
	{
		b = *list;
		j = 0;
		while (j < i)
		{
			if (b->data == a->data)
				return (0);
			b = b->next;
			j++;
		}
		a = a->next;
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
