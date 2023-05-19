/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:30:35 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/18 12:20:57 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
/* 	t_stack	*b; */

	atexit(ft_leaks);
	if (argc > 0)
	{
		a = NULL;
/* 		b = NULL; */
		numbers_parsing(argc, argv, &a);
		stack_sort(&a);
		node_print_a(a);
		stack_clean(&a);
	}
	return (0);
}
