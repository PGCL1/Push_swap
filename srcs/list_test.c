/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:54:52 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/09 18:58:42 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void node_insert_beginning(int data)
{
	t_stack *temp;

	temp = malloc(sizeof(t_stack));
	temp->data = data;
	temp->next = head;
	head = temp;	
}

void node_insert_nth_pos(int data, int position)
{
	t_stack *temp1 = malloc(sizeof(t_stack));
	temp1->data = data;
	temp1->next = NULL;
	//if we want to insert the node at the beginning of the list
	if (position == 1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	t_stack *temp2 = head;
	//to get to temp2 to the position where we want to do the replacement
	for (int i = 0; i < position - 2; i++){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
	return;
}

void node_delete_nth_pos(int position)
{
	t_stack *temp1 = head;
	if (position == 1)
	{
		head = temp1->next;
		free(temp1);
		return;
 	}
	for (int i = 0; i < position - 2; i++){
		temp1 = temp1->next;
	}
	t_stack *temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
}

void node_reverse(t_stack *list)
{
	//exit condition for the recursion
	if (list->next == NULL)
	{
		head = list;
		return;
	}	
	node_reverse(list->next);
	t_stack *aux = list->next;
	aux->next = list;
	list->next = NULL;
}

void node_print_reverse(t_stack *list)
{
	if (list == NULL)
		return;
	node_print_reverse(list->next);
	printf("%d -> ", list->data);
}

static void	ft_push(t_stack **a, int content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->data = content;
	node->next = (*a);
	(*a) = node;
}
