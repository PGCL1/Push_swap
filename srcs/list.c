/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:46:04 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/16 22:10:30 by glacroix         ###   ########.fr       */
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

t_stack	*ft_lstnew_pw_radix(int content, int index)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	ft_memset(node, 0, sizeof(t_stack));
	node->data = content;
	node->index = index;
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
		printf("Data is %d\t", temp->data);
		printf("Index is %d\n", temp->index);
		temp = temp->next;
	}
	printf("---------------END-------------\n\n");
}

void	node_print_b(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	printf("-------------Stack B-------------\n");
	while (temp->next)
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

int	ft_lstsize_pw(t_stack **stack)
{
	int	x;
	t_stack *temp;

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