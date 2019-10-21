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

int		duplicate(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < i)
		{
			if (ft_strequ(av[i], av[j]))
				return (0);
			j++;
		}
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
		if (ft_isdigit(str[i]) || (str[i] == ' ' || str[i] == '-'))
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

void	lim(char **av, int a)
{
	int		i;
	char	**dub;

	i = 0;
	if (a == 1)
	{
		while (av[++i])
		{
			if (ft_atoll(av[i]) < -2147483648 || ft_atoll(av[i]) > 2147483647)
			{
				ft_putendl("Error");
				exit(0);
			}
		}
	}
	else
	{
		dub = ft_strspliter(av[1]);
		while (dub[++i])
			if (ft_atoll(dub[i]) < -2147483648 || ft_atoll(dub[i]) > 2147483647)
			{
				ft_putendl("Error");
				exit(0);
			}
	}
}
