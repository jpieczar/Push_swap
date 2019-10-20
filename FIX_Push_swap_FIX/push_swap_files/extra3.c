/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:53:54 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/16 14:09:51 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simplesortback(t_node **list, t_node **tsil, int i)
{
	t_node	*a;
	t_node	*b;

	a = *list;
	b = *tsil;
	while (i > 0)
	{
		if (b->pos == i)
		{
			dopa(&b, &a);
			i--;
		}
		else
			dorb(&b);
	}
	*list = a;
	*tsil = b;
}

void	sorter(t_node **list, t_node **tsil, int ans, int *i)
{
	t_node	*a;
	t_node	*b;

	a = *list;
	b = *tsil;
	while (*i <= ans)
	{
		if (sorted(&a))
			break ;
		if (a->pos <= ans)
		{
			dopb(&a, &b);
			*i = *i + 1;
		}
		else
			dora(&a);
	}
	*list = a;
	*tsil = b;
}

void	sorter2(t_node **list, t_node **tsil, int num, int *i)
{
	t_node	*a;
	t_node	*b;

	a = *list;
	b = *tsil;
	while (*i > num)
	{
		if (b->pos == *i)
		{
			dopa(&b, &a);
			*i = *i - 1;
		}
		if (ft_displacement(&b, *i) < (ft_countd(&b) / 2))
			dorb(&b);
		else
			dorrb(&b);
	}
	*list = a;
	*tsil = b;
}

void	dosomethingdotjpeg(int *i, int *j)
{
	*i = 1;
	*j = 1;
}

void	dosomethingdotpng(t_node **list, t_node **tsil, int *i, int num)
{
	t_node	*a;
	t_node	*b;

	a = *list;
	b = *tsil;
	*i = num;
	tob(&b, &a);
	*list = a;
	*tsil = b;
}
