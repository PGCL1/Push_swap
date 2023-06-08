/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:46:04 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/08 19:34:30 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * The function adds a new node to the end of a linked list.
 * 
 * @param lst lst is a pointer to a pointer to the first node of a linked list of
 * type t_stack. It is passed as a reference so that the function can modify the
 * original pointer and update the linked list.
 * @param new The "new" parameter is a pointer to a t_stack struct, which is the
 * node that needs to be added to the end of the linked list.
 */
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

/**
 * The function creates a new node for a stack with the given content.
 * 
 * @param content The parameter "content" is an integer value that represents the
 * data to be stored in the newly created node of a stack.
 * 
 * @return The function `ft_lstnew_pw` is returning a pointer to a newly created
 * node of type `t_stack` with the `data` field set to the value of the `content`
 * parameter and the `next` field set to `NULL`.
 */
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

/**
 * The function returns the last element of a linked list.
 * 
 * @param lst The parameter `lst` is a pointer to the first node of a linked list
 * of type `t_stack`.
 * 
 * @return The function `ft_lstlast_pw` returns a pointer to the last node of a
 * linked list of type `t_stack`. If the linked list is empty, it returns `NULL`.
 */
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