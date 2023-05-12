/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:46:04 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/11 12:51:17 by glacroix         ###   ########.fr       */
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

t_stack	*ft_lstnew_pw(int content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = content;
	node->next = NULL;
	return (node);
}

t_stack	*ft_lstlast_pw(t_stack *lst)
{
	t_stack	*temp;

	temp = lst;
	if (!lst)
		return (NULL);
	while (temp)
	{
		if (!(temp->next))
			return (temp);
		temp = temp->next;
	}
	return (temp);
}

void	node_print(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

void	node_print_a(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	printf("-------------Stack A-------------\n");
	while (temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("---------------END-------------\n\n");
}

void	node_print_b(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	printf("-------------Stack B-------------\n");
	while (temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("---------------END-------------\n\n");
}

void	node_print_adi(t_stack *a)
{
	t_stack	*temp;

	temp = a;
	while (temp != NULL)
	{
		printf("%p is the address of %d\n", &temp->data, temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
