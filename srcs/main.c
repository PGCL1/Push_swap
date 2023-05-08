/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:10:00 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/08 17:02:53 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char **argv)
{
	head = NULL;//empty list
	printf("\n");
	system("leaks -q a.out");
	if (argc > 0)
	{
		numbers_parsing(argc, argv);
		node_print();
		node_reverse(head); //what you put in stack
		printf("\n");
		node_print();
/* 		node_print_adi(); */
	}
	return (0);
}
