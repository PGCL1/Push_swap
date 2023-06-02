/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:30:35 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/02 15:18:05 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	int 		size;
	
	(void)argv;
	(void)argc;
	a = NULL;
	b = NULL;
	size = 0;
	atexit(ft_leaks);
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
		node_print_b(b); 
		stack_clean(&a);
	}
	return (0);
}
