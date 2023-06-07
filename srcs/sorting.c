/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:17:29 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/07 18:14:03 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
		stack_sort_small_5((&(*a)), (&(*b)));
	/* else if (size == 100)
	
	else if (size == 500)
	 */
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

void ft_swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/* void    value_by_index(int **stacks, int size)
{
    int	i;
    int	j;
    int	t;
    int	*arr;
	
    i = -1;
    arr = malloc((size) * sizeof(int));
    while (++i < size)
    {
        t = stacks[0][i];
        arr[i] = 1;
        j = -1;
        while (++j < i)
        {
            if (stacks[0][j] < t)
				arr[i]++;
			else
				arr[j]++;
        }
    }
    while (--i >= 0)
        stacks[0][i] = arr[i];
    free(arr);
}

int *parsing2array(t_stack **a, int *nums)
{
	t_stack *temp;
	int i;
	
	i = 0;
	temp = (*a);
	while (temp->next != NULL)
	{
		nums[i++] = temp->data;				
		temp = temp->next;
	}
	return(nums);
} */