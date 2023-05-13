/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:30:35 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/13 11:32:17 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	atexit(ft_leaks);
	if (argc > 0)
	{
		a = NULL;
		numbers_parsing(argc, argv, &a);
		printf("\t      BEFORE\t\n");
		node_print_a(a);
		ft_swap(&a);
		printf("\t      AFTER\t\n");
		node_print_a(a);
		stack_clean(&a);
	}
	return (0);
}
