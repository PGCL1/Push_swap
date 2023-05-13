/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:02:22 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/13 20:16:54 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
ss : sa and sb at the same time.
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.
*/

void	ft_push(t_stack **stack, int content)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return;
	node->data = content;
	node->next = (*stack);
	(*stack) = node;
}

void	ft_swap(t_stack **stack)
{
	t_stack	*temp;
	
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return;	
	temp->data = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = temp->data;
	temp->data = (*stack)->data;
	free(temp);
}

void	ft_rotate(t_stack **stack)
{
	t_stack *temp;
	t_stack *head;
	
	head = (*stack);
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return;	
	temp->data = (*stack)->data;
	ft_lstadd_back_pw(stack, temp);
	(*stack) = (*stack)->next;
	free(head);
	
}

void ft_reverse_rotate(t_stack **stack)
{
	t_stack *temp;
	t_stack *aux;
	
	aux = (*stack);
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return;
	temp->data = ft_lstlast_pw(*stack)->data;
	ft_lstadd_front_pw(&(*stack), temp);
	while (aux->next->next != NULL)
		aux = aux->next;
	free(aux->next->next);
/* 	free(temp); */
	aux->next = NULL;
}