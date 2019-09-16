/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 08:23:38 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/16 11:41:47 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	think_(char *str, t_node **a, t_node **b)
{
	if (ft_strequ(str, "sa"))
		swapcheck(a);
	else if (ft_strequ(str, "sb"))
		swapcheck(b);
	else if (ft_strequ(str, "pa"))
		pass(b, a);
	else if (ft_strequ(str, "pb"))
		pass(a, b);
	else if (ft_strequ(str, "ra"))
		rot(a);
	else if (ft_strequ(str, "rb"))
		rot(b);
	else if (ft_strequ(str, "rra"))
		rrot(a);
	else if (ft_strequ(str, "rrb"))
		rrot(b);
	else if (ft_strequ(str, "ss"))
	{
		if ((!(*a) || !(*a)->next) || (!(*b) || !(*b)->next))
			return ;
		swapcheck(a);
		swapcheck(b);
	}
	else if (ft_strequ(str, "rr") || ft_strequ(str, "rrr"))
		twice(str, a, b);
}

void	twice(char *str, t_node **a, t_node **b)
{
	if ((!(*a) || !(*a)->next) || (!(*b) || !(*b)->next))
		return ;
	if (ft_strequ(str, "rr"))
	{
		rot(a);
		rot(b);
	}
	else if (ft_strequ(str, "rrr"))
	{
		rrot(a);
		rrot(b);
	}
}
