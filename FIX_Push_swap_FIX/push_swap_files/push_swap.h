/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:41:24 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/16 16:02:31 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../checker_files/checker.h"

int		ekam(t_node *a, t_node *b, int ac, char **av);
char    *argcat(char *s1, const char *s2);
int     zerocheck(char *str);
void    ehand(char *str);

void	swapcheck(t_node **list);
void	rot(t_node **list);
void	rrot(t_node **list);

int		e(char *arg);
int		duplicate(int ac, char **av);
int		sorted(t_node **list);
void	lim(char **av, int a);

void	in_sort(t_node **list, t_node **tsil, int i);
void	givepos(t_node **list);
void	simplesort(t_node **list, t_node **tsil, int num, int i);
void	onesort(t_node **list, t_node **tsil, int num);

void	dopb(t_node **list, t_node **tsil);
void	dopa(t_node **list, t_node **tsil);
void	dorb(t_node **list);
void	dora(t_node **list);
void	toa(t_node **list, t_node **tsil);

void	tob(t_node **list, t_node **tsil);
void	dorrb(t_node **list);
void	dorra(t_node **list);
void	dosa(t_node **list);
int		deltax(t_node **list, int num);

void	simplesortback(t_node **list, t_node **tsil, int i);
void	sorter(t_node **list, t_node **tsil, int num, int *i);
void	sorter2(t_node **list, t_node **tsil, int sna, int *i);
void	dosomethingdotjpeg(int *i, int *j);
void	dosomethingdotpng(t_node **list, t_node **tsil, int *i, int num);
int		ft_displacement(t_node **list, int num);
void	smallsort(t_node **list);

#endif
