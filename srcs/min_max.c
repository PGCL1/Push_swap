/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:09:39 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/01 19:06:49 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int stack_min_data(t_stack *copy)
{
	int		min;

	min = copy->data;
	while (copy->next != NULL)
	{
		if (min > copy->next->data)
			min = copy->next->data;
		copy = copy->next;		
	}
	return (min);
}

int stack_max_data(t_stack *copy)
{
	int		max;

	max = copy->data;
	while (copy->next != NULL)
	{
		if (max < copy->next->data)
			max = copy->next->data;
		copy = copy->next;		
	}
	return (max);
}