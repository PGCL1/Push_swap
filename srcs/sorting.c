/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:17:29 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/19 19:20:47 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_sort(t_stack **a, t_stack **b, int size)
{
	if (size < 4)
	{
		(void)(*b);
		if (size == 2)
			stack_sort_small_2(&(*a));
		else if (size == 3)
			stack_sort_small_3(&(*a));
	}
	else
	{
		(*b) = NULL;
		if (size == 4)
			stack_sort_small_4((&(*a)), (&(*b)));
		else if (size == 5)
			stack_sort_small_5((&(*a)), (&(*b)));
		else
			radix_sort((&(*a)), (&(*b)), size);
	}
}

int	stack_sorted(t_stack *copy)
{
	while (copy->next != NULL)
	{
		if (copy->data > copy->next->data)
			return (1);
		copy = copy->next;
	}
	return (0);
}

void	ft_swap_int(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
