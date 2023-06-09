/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:35:23 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/09 18:05:05 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int max_bits_stack(t_stack **stack)
{
	t_stack *temp;
	int max;
	int max_bits;

	temp = (*stack);
	max = temp->index;
	max_bits = 0;
	while (temp->next)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	printf("Max is %d\n", max);
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack **a, t_stack **b, int size)
{
	t_stack	*temp;
	int		i;
	int		j;
	int		max_bits;

	i = -1;
	max_bits = max_bits_stack(&(*a));
	temp = (*a);
	printf("NUm is %d index is %d\n", temp->data, temp->index);
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			temp = (*a);
			if (((temp->index >> i) & 1) == 1)
				rotate_a(&(*a));
			else
				push_b(&(*a), &(*b));
		}
		while (ft_lstsize_pw(&(*b)) != 0)
			push_a(&(*a), &(*b));
	}
}