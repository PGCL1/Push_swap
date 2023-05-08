/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:46:04 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/05 23:15:26 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void node_insert_beginning(int data)
{
	t_node *temp;

	temp = malloc(sizeof(t_node));
	temp->data = data;
	temp->next = head;
	head = temp;	
}

void node_insert_nth_pos(int data, int position)
{
	t_node *temp1 = malloc(sizeof(t_node));
	temp1->data = data;
	temp1->next = NULL;
	//if we want to insert the node at the beginning of the list
	if (position == 1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	t_node *temp2 = head;
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
	t_node *temp1 = head;
	if (position == 1)
	{
		head = temp1->next;
		free(temp1);
		return;
 	}
	for (int i = 0; i < position - 2; i++){
		temp1 = temp1->next;
	}
	t_node *temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
}

void node_reverse(t_node *list)
{
	//exit condition for the recursion
	if (list->next == NULL)
	{
		head = list;
		return;
	}	
	node_reverse(list->next);
	t_node *aux = list->next;
	aux->next = list;
	list->next = NULL;
}

void node_print_reverse(t_node *list)
{
	if (list == NULL)
		return;
	node_print_reverse(list->next);
	printf("%d -> ", list->data);
}

void node_print()
{
	t_node *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
	return;
}

void node_print_adi()
{
	t_node *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%p is the address of %d\n", &temp->data, temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
	return;
}