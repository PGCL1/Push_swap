/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:30:35 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/08 17:36:27 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main1(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	int 		size;
	
	a = 0;
	b = 0;
	/* for (int i = size - 1; i >= 0; i--)
		printf("%d  ", stack[i]); */
/* 	atexit(ft_leaks); */
 	if (argc > 0)
	{
		numbers_parsing(argc, argv, &a);
		if (stack_sorted(a) == 0)
		{
			stack_clean(&a);
			return (0);
		}
	 	size = ft_lstsize_pw(&a);
		stack_sort(&a, &b, size);
		node_print_a(a); 
		stack_clean(&a);
	}
	return (0);
}


/* 1 2 3 4
2 1 3 4
struct 
int	number
unsigned int index;
index = 0;
list = [2]
new_element = 1;
while s_list
	if (list.number < new_element.number)
		list.index ++;
	else if (list.number > new_element.number)
		new_element.index ++; */