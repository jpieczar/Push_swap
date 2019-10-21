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

// int		ekam(t_node *a, t_node *b, int ac, char **av)
// {
// 	int i;

// 	if (!e(av) || !duplicate(ac, av))
// 	{
// 		ft_putendl("Error");
// 		exit(0);
// 	}
// 	lim(av, 1);
// 	ft_putnode(&a, av, ac);
// 	i = ft_countd(&a);
// 	if (ft_countd(&a) == 2 && !sorted(&a))
// 	{
// 		swapcheck(&a);
// 		ft_putendl("sa");
// 		return (1);
// 	}
// 	if (!sorted(&a))
// 		in_sort(&a, &b, i);
// 	ft_lstdelthis(&a);
// 	return (1);
// }

char	*argcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i++] = ' ';
	s1[i] = '\0';
	return (s1);
}

int     zerocheck(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '0' && (str[i + 1] == '0' || (str[i + 1] > 48 && str[i + 1] < 59)))
			return (0);
		i++;
	}
	return (1);
}

void	ehand(char *str)
{
	if (/*!e(str) ||*/  !zerocheck(str))
	{
		ft_putendl("Error");
		exit(0);
	}
}

int		ekam(t_node *a, t_node *b, int ac, char **av)
{
	int i;

	if (!duplicate(ac, av))
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
	int		i;
	char	*cat;
	char	**dub;

	a = NULL;
	b = NULL;
	i = 2;
	if (ac > 1)
	{
		cat = malloc(sizeof(char) * ft_strlen(av[1] + 2));
		cat = argcat(cat, av[1]);
		while (i < ac)
			cat = argcat(cat, av[i++]);
		dub = ft_strspliter(cat);
		ehand(cat);
		if (ekam(a, b, ft_wc(cat), dub))
			return (0);
	}
	return (0);
}