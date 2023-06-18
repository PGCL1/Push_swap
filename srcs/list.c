/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:46:04 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/19 00:31:16 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstadd_back_pw(t_stack **lst, t_stack *new)
{
	if (!*lst)
		*lst = new;
	else
		ft_lstlast_pw(*lst)->next = new;
}

void	ft_lstadd_front_pw(t_stack **lst, t_stack *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

t_stack	*ft_lstnew_pw(int content)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	ft_memset(node, 0, sizeof(t_stack));
	node->data = content;
	return (node);
}

t_stack	*ft_lstlast_pw(t_stack *lst)
{
	t_stack	*temp;

	temp = lst;
	if (!lst)
		return (NULL);
	while (temp->next)
		temp = temp->next;
	return (temp);
}

int	ft_lstsize_pw(t_stack **stack)
{
	int		x;
	t_stack	*temp;

	x = 1;
	temp = (*stack);
	if (!temp)
		return (0);
	while (temp->next != NULL)
	{
		temp = temp->next;
		x++;
	}
	return (x);
}
