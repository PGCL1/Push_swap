/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:30:35 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/31 18:23:37 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a = NULL;
	t_stack	*b = NULL;

	a = stack_create(a);
	b = stack_create(b);
	
	atexit(ft_leaks);
	if (argc > 0)
	{
		numbers_parsing(argc, argv, &a);
		stack_sort(&a);
		node_print_a(a);
		stack_clean(&a);
	}
	return (0);
}
