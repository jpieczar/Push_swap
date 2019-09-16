/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:14:15 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/13 10:50:39 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dopb(t_node **list, t_node **tsil)
{
	t_node	*a;
	t_node	*b;

	a = *list;
	b = *tsil;
	pass(&a, &b);
	ft_putendl("pb");
	*list = a;
	*tsil = b;
}

void	dopa(t_node **list, t_node **tsil)
{
	t_node	*a;
	t_node	*b;

	a = *list;
	b = *tsil;
	pass(&a, &b);
	ft_putendl("pa");
	*list = a;
	*tsil = b;
}

void	dora(t_node **list)
{
	t_node	*a;

	a = *list;
	rot(&a);
	ft_putendl("ra");
	*list = a;
}

void	dorb(t_node **list)
{
	t_node	*a;

	a = *list;
	rot(&a);
	ft_putendl("rb");
	*list = a;
}

void	toa(t_node **list, t_node **tsil)
{
	t_node	*a;
	t_node	*b;

	a = *list;
	b = *tsil;
	while (b)
	{
		pass(&b, &a);
		ft_putendl("pa");
	}
	*list = a;
	*tsil = b;
}
