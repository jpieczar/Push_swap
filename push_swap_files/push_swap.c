/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:40:17 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/16 09:18:51 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ekam(t_node *a, t_node *b, int ac, char **av)
{
	int i;

	if (!e(av) || !duplicate(ac, av))
	{
		ft_putendl("Error");
		exit(0);
	}
	lim(av, 1);
	ft_putnode(&a, av, ac);
	i = ft_countd(&a);
	if (ft_countd(&a) == 2 && !sorted(&a))
	{
		swapcheck(&a);
		ft_putendl("sa");
		return (1);
	}
	if (!sorted(&a))
		in_sort(&a, &b, i);
	ft_lstdelthis(&a);
	return (1);
}

int		ekam2(t_node *a, t_node *b, int ac, char **av)
{
	int i;

	if (!e(av) || !duplicate(ac, av))
	{
		ft_putendl("Error");
		exit(0);
	}
	lim(av, 2);
	ft_putedon(&a, av, ac);
	i = ft_countd(&a);
	if (ft_countd(&a) == 2 && !sorted(&a))
	{
		swapcheck(&a);
		ft_putendl("sa");
		return (1);
	}
	if (!sorted(&a))
		in_sort(&a, &b, i);
	ft_lstdelthis(&a);
	return (1);
}

int		main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	char	**dub;

	a = NULL;
	b = NULL;
	if (ac > 1)
	{
		if (ac == 2)
		{
			if (ft_wc(av[1]) == 1)
				return (0);
			dub = ft_strspliter(av[1]);
			if (ekam2(a, b, ft_wc(av[1]), dub))
				return (0);
		}
		else
		{
			if (ekam(a, b, ac, av))
				return (0);
		}
	}
	return (0);
}
