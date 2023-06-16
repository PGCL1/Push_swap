/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:02:22 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/16 22:12:16 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
//				A					3
void ft_push(t_stack **stack, int content)
{
	t_stack *aux;
	
	aux = ft_lstnew_pw(content);
	ft_lstadd_front_pw(&(*stack), aux);
	(*stack) = aux;
	return;
}

/*
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
*/
void push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp;
	
	if (!(*stack_b))
		return;
	ft_push(&(*stack_a), (*stack_b)->data);
	ft_putstr_fd("pa\n", 1);
	temp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	free(temp);
}

/*
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
*/
void push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp;
	if (!(*stack_a))
		return;
	ft_push(&(*stack_b), (*stack_a)->data);
	temp = (*stack_a);
	ft_putstr_fd("pb\n", 1);
	(*stack_a) = (*stack_a)->next;
	free(temp);
}

int	ft_swap(t_stack **stack)
{
	t_stack	*temp;
	
	if (ft_lstsize_pw(&(*stack)) < 2)
		return (-1);
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return (-1);	
	temp->data = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = temp->data;
	temp->data = (*stack)->data;
	free(temp);
	return (0);
}

/* 
sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/

void swap_a(t_stack **stack)
{
	if (ft_swap(stack) == -1)
		return;
	ft_putstr_fd("sa\n", 1);
}

/* 
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements. 
*/

void swap_b(t_stack **stack)
{
	if (ft_swap(stack) == -1)
		return;
	ft_putstr_fd("sb\n", 1);
}


/*
ss : sa and sb at the same time.
*/
void swap_both(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_swap(stack_a) == -1 || ft_swap(stack_b) == -1)
		return;
	ft_putstr_fd("ss\n", 1);
}

int	ft_rotate(t_stack **stack)
{
	t_stack	*head;

	if (ft_lstsize_pw(&(*stack)) < 2)
		return (-1);
	head = (*stack);
	ft_lstadd_back_pw(stack, ft_lstnew_pw((*stack)->data));
	(*stack) = (*stack)->next;
	free(head);
	return (0);
}

int	ft_rotate_radix(t_stack **stack)
{
	t_stack	*head;

	if (ft_lstsize_pw(&(*stack)) < 2)
		return (-1);
	head = (*stack);
	ft_lstadd_back_pw(stack, ft_lstnew_pw((*stack)->data));
	(*stack) = (*stack)->next;
	free(head);
	return (0);
}

void rotate_a(t_stack **stack)
{
	if (ft_rotate(&(*stack)) == -1)
		return;
	ft_putstr_fd("ra\n", 1);
}

/* 
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one. 
*/
void rotate_b(t_stack **stack)
{
	if (ft_rotate(&(*stack)) == -1)
		return;
	ft_putstr_fd("rb\n", 1);
}

/*
rr : ra and rb at the same time.
*/
void rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_rotate(&(*stack_a)) == -1 || ft_rotate(&(*stack_b)) == -1)
		return;
	ft_putstr_fd("rr\n", 1);
}

int ft_reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*aux;
	
	if (ft_lstsize_pw(&(*stack)) < 2)
		return (-1);
	aux = (*stack);
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return (-1);
	temp->data = ft_lstlast_pw(*stack)->data;
	ft_lstadd_front_pw(&(*stack), temp);
	while (aux->next->next != NULL)
		aux = aux->next;
	free(aux->next);
	aux->next = NULL;
	return (0);
}

/* 
rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one. 
*/
void reverse_rotate_a(t_stack **stack)
{
	if (ft_reverse_rotate(&(*stack)) == -1)
		return;
	ft_putstr_fd("rra\n", 1);
}

/* 
rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one. 
*/
void reverse_rotate_b(t_stack **stack)
{
	if (ft_reverse_rotate(&(*stack)) == -1)
		return;
	ft_putstr_fd("rrb\n", 1);
}

/*
rrr : rra and rrb at the same time.
*/
void reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_reverse_rotate(&(*stack_a)) == -1 || ft_reverse_rotate(&(*stack_b)) == -1)
		return;
	ft_putstr_fd("rrr\n", 1);
}