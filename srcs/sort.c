/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:12:28 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/31 18:08:14 by glacroix         ###   ########.fr       */
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

void stack_sort(t_stack **a)
{
	int size = ft_lstsize_pw(&(*a));
	if (size == 2)
		stack_sort_small_2(&(*a));
	else if (size == 3)
		stack_sort_small_3(&(*a));
	/*...........to be continued........*/
}

void stack_sort_small_2(t_stack **a)
{
	if ((*a)->data < (*a)->next->data)
		swap_a(&(*a));
	return;
}

void stack_sort_small_3(t_stack **a)
{
	if ((*a)->data > (*a)->next->data && (*a)->next->data < (*a)->next->next->data) //3 1 2
		reverse_rotate_a(&(*a));
	else if ((*a)->data < (*a)->next->data && (*a)->next->data > (*a)->next->next->data) // 1 3 2
	{
		swap_a(&(*a));
		rotate_a(&(*a));
	}
	else if ((*a)->data > (*a)->next->data && (*a)->next->data > (*a)->next->next->data) // 3 2 1
	{
		swap_a(&(*a));
		reverse_rotate_a(&(*a));
	}
	//else if ((*a)->data > (*a)->next->data && (*a)->next->data < (*a)->next->next->data)// 
	return ;
}

