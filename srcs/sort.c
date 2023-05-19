/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:12:28 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/17 19:13:51 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//let's imagine a case for 3 numbers
//let's imagine a case for 5 numbers

/*
1	2 	3	= sorted
1	3	2	= pb / sa / pa
2	3	1	= rra
2	1	3	= sa
3	2	1	= sa / rra
3	1	2	= sa
*/



void stack_sort(t_stack **a)
{
	t_stack *temp;

	temp = (*a);
	while (temp->next != NULL)
	{
		if (temp->data < temp->next->data)
			temp = temp->next;	
		else
		{
			printf("Not Sorted\n");
			break;
		}		
	}
	printf("Sorted\n");
}

void stack_moves(t_stack **a, t_stack **b)
{
	//define min - med - max
	(void)*b;
	t_stack *temp = (*a);
	int min = 0;
	int med = 0;
	int max = 0;
	while (temp->next != NULL)
	{
		if (temp->data < temp->next->data)
			min = temp->data;
		else if (temp->data > temp->next->data)
			max = temp->data;
		temp = temp->next;
	}
	printf("Min is %d\n", min);
	printf("Med is %d\n", med);
	printf("Max is %d\n", max);
}

