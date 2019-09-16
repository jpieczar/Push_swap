/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 08:24:50 by jpieczar          #+#    #+#             */
/*   Updated: 2019/08/30 11:21:21 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"

int		make(t_node *a, t_node *b, int ac, char **av);
int		make2(t_node *a, t_node *b, int ac, char **av);

void	swapcheck(t_node **list);
void	pass(t_node **list, t_node **tsil);
void	passall(t_node **list, t_node **tsil);
void	rot(t_node **list);
void	rrot(t_node **list);

void	think_(char *str, t_node **a, t_node **b);
void	twice(char *str, t_node **a, t_node **b);

int		e(char **arg);
int		r(char *line);
int		duplicate(int ac, char **av);
int		sorted(t_node **list);
void	lim(char **av, int a);

#endif
