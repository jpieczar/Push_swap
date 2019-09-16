/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 07:53:26 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/11 10:33:01 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "checker.h"

int		make(t_node *a, t_node *b, int ac, char **av)
{
	char	*line;

	if (!e(av) || !duplicate(ac, av))
	{
		ft_putendl("Error");
		exit(0);
	}
	lim(av, 1);
	ft_putnode(&a, av, ac);
	while (get_next_line(0, &line))
	{
		if (r(line))
			think_(line, &a, &b);
		else
		{
			ft_putendl("Error");
			exit(0);
		}
		free(line);
	}
	if (ft_countd(&b) || !sorted(&a))
		return (0);
	return (1);
}

int		make2(t_node *a, t_node *b, int ac, char **av)
{
	char	*line;

	if (!e(av) || !duplicate(ac, av))
	{
		ft_putendl("Error");
		exit(0);
	}
	lim(av, 2);
	ft_putedon(&a, av, ac);
	while (get_next_line(0, &line))
	{
		if (r(line))
			think_(line, &a, &b);
		else
		{
			ft_putendl("Error");
			exit(0);
		}
		free(line);
	}
	if (ft_countd(&b) || !sorted(&a))
		return (0);
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
			if (make2(a, b, ft_wc(av[1]), dub))
				ft_putendl("OK");
			else
				ft_putendl("KO");
		}
		else if (make(a, b, ac, av))
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	return (0);
}
