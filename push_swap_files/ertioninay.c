/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ertioninay.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:40:10 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/16 16:03:10 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	givepos(t_node **list)
{
	t_node	*a;
	t_node	*b;
	int		pos;

	a = *list;
	while (a)
	{
		pos = ft_countd(list);
		a->pos = pos;
		b = *list;
		while (b)
		{
			if (a->data < b->data)
				a->pos--;
			b = b->next;
		}
		a = a->next;
	}
}

void	simplesort(t_node **list, t_node **tsil, int num, int i)
{
	t_node		*a;
	t_node		*b;

	a = *list;
	b = *tsil;
	while (i < num)
	{
		if (sorted(&a))
			break ;
		if (a->pos == i)
		{
			dopb(&a, &b);
			i++;
		}
		else if ((ft_countd(&a) - deltax(&a, i)) > (ft_countd(&a) / 2))
			dora(&a);
		else
			dora(&a);
	}
	toa(&a, &b);
	*list = a;
	*tsil = b;
}

void	onesort(t_node **list, t_node **tsil, int num)
{
	t_node	*a;
	t_node	*b;
	int		i;
	int		j;
	int		ans;

	a = *list;
	b = *tsil;
	dosomethingdotjpeg(&i, &j);
	ans = (num / 5);
	while (j++ <= 4)
	{
		sorter(&a, &b, ans, &i);
		ans += (num / 5);
	}
	dosomethingdotpng(&a, &b, &i, num);
	while (num >= (ans / 5))
	{
		while (i > num)
			sorter2(&a, &b, num, &i);
		num -= (ans / 5);
	}
	simplesortback(&a, &b, i);
	*list = a;
	*tsil = b;
}

void	fivesort(t_node **list, t_node **tsil, int num)
{
	t_node	*a;
	t_node	*b;
	int		i;
	int		j;
	int		ans;

	a = *list;
	b = *tsil;
	dosomethingdotjpeg(&i, &j);
	ans = (num / 20);
	while (j++ <= 19)
	{
		sorter(&a, &b, ans, &i);
		ans += (num / 20);
	}
	dosomethingdotpng(&a, &b, &i, num);
	while (num >= (ans / 20))
	{
		while (i > num)
			sorter2(&a, &b, num, &i);
		num -= (ans / 20);
	}
	simplesortback(&a, &b, i);
	*list = a;
	*tsil = b;
}

void	in_sort(t_node **list, t_node **tsil, int num)
{
	t_node	*a;
	t_node	*b;

	a = *list;
	b = *tsil;
	givepos(&a);
	if (num == 3)
		smallsort(&a);
	if (num <= 20)
	{
		simplesort(&a, &b, num, 1);
		toa(&a, &b);
	}
	else if (num <= 100)
		onesort(&a, &b, num);
	else
		fivesort(&a, &b, num);
	*list = a;
	*tsil = b;
}
