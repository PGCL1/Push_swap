/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data2index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:01:05 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/20 13:11:41 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	data2index(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	first = (*a);
	while (first->next)
	{
		second = first->next;
		while (second)
		{
			if (first->data < second->data)
				second->index++;
			else if (first->data > second->data)
				first->index++;
			second = second->next;
		}
		first = first->next;
	}
}
