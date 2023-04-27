/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:46:04 by glacroix          #+#    #+#             */
/*   Updated: 2023/04/27 20:59:49 by glacroix         ###   ########.fr       */
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

void node_print()
{
	t_node *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	return;
}