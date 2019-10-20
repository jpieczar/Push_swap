/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:49:29 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/16 16:18:08 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_displacement(t_node **list, int num)
{
	t_node	*a;
	int		i;

	a = *list;
	i = 1;
	while (a->pos != num)
	{
		a = a->next;
		i++;
	}
	return (i);
}

void	smallsort(t_node **list)
{
	t_node *a;
	
	a = *list;
	if (a->pos == 2 && a->next->pos == 1)
		dosa(&a);
	else if (a->pos == 3 && a->next->pos == 1)
		dorra(&a);
	else if (a->pos == 2 && a->next->pos == 3)
		dorra(&a);
	else if (a->pos == 3 && a->next->pos == 2)
	{
		dosa(&a);
		dora(&a);
	}
	else
	{
		dosa(&a);
		dora(&a);
	}
	*list = a;
}