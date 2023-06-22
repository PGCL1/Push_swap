/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_per_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:12:28 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/22 15:48:15 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_sort_small_2(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		swap_a(&(*a));
}

void	stack_sort_small_3(t_stack **a)
{
	if (stack_min_data(*a) == (*a)->data)
	{
		swap_a(&(*a));
		rotate_a(&(*a));
	}
	else if (stack_max_data(*a) == (*a)->data)
	{
		rotate_a(&(*a));
		if (stack_sorted(*a) == 1)
			swap_a(&(*a));
	}
	else if (stack_min_data(*a) == (*a)->next->data)
		swap_a(&(*a));
	else if (stack_max_data(*a) == (*a)->next->data)
		reverse_rotate_a(&(*a));
}

void	stack_sort_small_4(t_stack **a, t_stack **b)
{
	int	index;

	index = stack_min_position((*a), stack_min_data(*a));
	stack_push_min(index, &(*a), &(*b));
	if (stack_sorted(*a) == 0)
		push_a(&(*a), &(*b));
	else
	{
		stack_sort_small_3(&(*a));
		push_a(&(*a), &(*b));
	}
}

void	stack_sort_small_5(t_stack **a, t_stack **b)
{
	int	index;

	index = stack_min_position((*a), stack_min_data(*a));
	stack_push_5min(index, &(*a), &(*b));
	if (stack_sorted(*a) == 0)
		push_a(&(*a), &(*b));
	else
	{
		stack_sort_small_4((&(*a)), (&(*b)));
		push_a(&(*a), &(*b));
	}
}
