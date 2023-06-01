/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:30:35 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/01 19:08:11 by glacroix         ###   ########.fr       */
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
		printf("\t BEFORE\n");
		node_print_a(a);
		stack_sort(&a, &b, size);
		printf("\t AFTER\n");
		node_print_a(a); 
		stack_clean(&a);
	}
	return (0);
}
