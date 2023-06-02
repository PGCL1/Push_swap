/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:12:28 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/02 14:50:58 by glacroix         ###   ########.fr       */
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

/*  steps for 100 numbers:
 *	 	get size of stack divide by 4
 *	 	convert the numbers to index from 1 to 100
 *	 	push numbers from 1 to 25 to stack b
 *	 	if number less than key - 13 rotate b
 *             until stack a is empty (editado) 
*/

void stack_sort(t_stack **a, t_stack **b, int size)
{
	if (size < 4)
		(void)(*b);
	else
		(*b) = malloc(sizeof(t_stack));
	if (size == 2)
		stack_sort_small_2(&(*a));
	else if (size == 3)
		stack_sort_small_3(&(*a));
	else if (size == 5)
		stack_sort_small_5((&(*a)), (&(*a)));
	stack_clean(&(*b));
	/*...........to be continued........*/
}

int stack_sorted(t_stack *copy)
{
	while (copy->next != NULL)
	{
		if (copy->data > copy->next->data)
			return (1);
		copy = copy->next;
	}
	return (0);
}

void stack_sort_small_2(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		swap_a(&(*a));
	return;
}

void stack_sort_small_3(t_stack **a)
{
	if (stack_sorted((*a)) == 0)
		return;
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
	return ;
}

void stack_sort_small_5(t_stack **a, t_stack **b)
{
	push_b((&(*a)), (&(*b)));
	push_b((&(*a)), (&(*b)));
}