/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 08:35:32 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/11 07:49:54 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
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

int		r(char *line)
{
	if (ft_strequ(line, "sa") || ft_strequ(line, "sb") || ft_strequ(line, "ss"))
		return (1);
	else if (ft_strequ(line, "ra") || ft_strequ(line, "rb"))
		return (1);
	else if (ft_strequ(line, "rra") || ft_strequ(line, "rrb"))
		return (1);
	else if (ft_strequ(line, "pa") || ft_strequ(line, "pb"))
		return (1);
	else if (ft_strequ(line, "rr") || ft_strequ(line, "rrr"))
		return (1);
	else if (ft_strequ(line, "ss"))
		return (1);
	else
		return (0);
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
