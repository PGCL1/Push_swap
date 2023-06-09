/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_arithmetic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:09:39 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/19 18:18:52 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stack_min_data(t_stack *copy)
{
	int	min;

	min = copy->data;
	while (copy->next != NULL)
	{
		if (copy->next->data < min)
			min = copy->next->data;
		copy = copy->next;
	}
	return (min);
}

int	stack_max_data(t_stack *copy)
{
	int	max;

	max = copy->data;
	while (copy->next != NULL)
	{
		if (copy->next->data > max)
			max = copy->next->data;
		copy = copy->next;
	}
	return (max);
}

int	stack_min_position(t_stack *stack, int min)
{
	int	i;

	i = 0;
	while (stack->next != NULL)
	{
		if (min == stack->data)
			break ;
		i++;
		stack = stack->next;
	}
	return (i);
}

void	stack_push_min(int i, t_stack **a, t_stack **b)
{
	if (i == 0)
		push_b((&(*a)), (&(*b)));
	else if (i == 1)
	{
		swap_a(&(*a));
		push_b((&(*a)), (&(*b)));
	}
	else if (i == 2)
	{
		rotate_a(&(*a));
		rotate_a(&(*a));
		push_b((&(*a)), (&(*b)));
	}
	else if (i == 3)
	{
		reverse_rotate_a(&(*a));
		push_b((&(*a)), (&(*b)));
	}
}

void	stack_push_5min(int i, t_stack **a, t_stack **b)
{
	if (i == 0)
		push_b((&(*a)), (&(*b)));
	else if (i == 1)
	{
		swap_a(&(*a));
		push_b((&(*a)), (&(*b)));
	}
	else if (i == 2)
	{
		rotate_a(&(*a));
		rotate_a(&(*a));
		push_b((&(*a)), (&(*b)));
	}
	else if (i == 3)
	{
		reverse_rotate_a(&(*a));
		reverse_rotate_a(&(*a));
		push_b((&(*a)), (&(*b)));
	}
	else if (i == 4)
	{
		reverse_rotate_a(&(*a));
		push_b((&(*a)), (&(*b)));
	}
}
