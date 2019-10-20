/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:24:20 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/13 12:06:13 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tob(t_node **list, t_node **tsil)
{
	t_node	*a;
	t_node	*b;

	a = *list;
	b = *tsil;
	while (b)
	{
		pass(&b, &a);
		ft_putendl("pb");
	}
	*list = a;
	*tsil = b;
}

void	dorrb(t_node **list)
{
	t_node	*a;

	a = *list;
	rrot(&a);
	ft_putendl("rrb");
	*list = a;
}

void	dorra(t_node **list)
{
	t_node	*a;

	a = *list;
	rrot(&a);
	ft_putendl("rra");
	*list = a;
}

void	dosa(t_node **list)
{
	t_node	*a;

	a = *list;
	swapcheck(&a);
	ft_putendl("sa");
	*list = a;
}

int		deltax(t_node **list, int num)
{
	t_node	*a;
	int		i;

	a = *list;
	i = 0;
	while (a)
	{
		if (a->pos == num)
			return (i);
		a = a->next;
		i++;
	}
	return (0);
}
