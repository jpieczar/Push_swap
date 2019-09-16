/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unctionsfay.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:04:10 by jpieczar          #+#    #+#             */
/*   Updated: 2019/09/02 09:53:42 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swapcheck(t_node **list)
{
	t_node	*a;
	t_node	*b;
	int		temp;

	if (!(*list) || !(*list)->next)
		return ;
	a = *list;
	b = a->next;
	temp = a->data;
	a->data = b->data;
	b->data = temp;
	*list = a;
}

void	pass(t_node **list, t_node **tsil)
{
	t_node *a;
	t_node *b;
	t_node *temp;

	if (!(*list))
		return ;
	b = *list;
	a = b->next;
	temp = *tsil;
	b->next = temp;
	*list = a;
	*tsil = b;
}

void	rrot(t_node **list)
{
	t_node *a;
	t_node *temp;
	t_node *n;

	if (!(*list) || !(*list)->next)
		return ;
	a = *list;
	n = a;
	while (n->next->next)
		n = n->next;
	temp = n->next;
	temp->next = a;
	n->next = NULL;
	*list = temp;
}

void	rot(t_node **list)
{
	t_node	*a;
	t_node	*n;
	t_node	*head;

	if (!(*list) || !(*list)->next)
		return ;
	head = (*list)->next;
	a = *list;
	n = a;
	while (n->next)
		n = n->next;
	n->next = a;
	a->next = NULL;
	*list = head;
}
