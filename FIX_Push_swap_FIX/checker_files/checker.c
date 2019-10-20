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
	if (!e(str) ||  !zerocheck(str))
	{
		ft_putendl("Error");
		exit(0);
	}
}

int		make(t_node *a, t_node *b, int ac, char **av)
{
	char	*line;

	if (!duplicate(ac, av))
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
		if (make(a, b, ft_wc(cat), dub))
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	return (0);
}
