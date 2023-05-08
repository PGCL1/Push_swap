/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:10:00 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/06 01:22:53 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//checking for errors in argv[i] multiples signes -- +- -+
int error_check(char *str)
{
	int errors_min = 0;
	int errors_plus = 0;
	int errors_mix = 0;
	while (*str)
	{
		if (*str == '-' || *str == '+')
			errors_mix++;
		if (*str == '-')
			errors_min++;
		else if (*str == '+')
			errors_plus++;
		str++;
	}
	if (errors_mix > 1 || errors_min > 1 || errors_plus > 1)
		return (1);
	return (0);
}

// int error_check(char *str)
//{
//	t_err err;
//	ft_memset(&err, 0, /*ask pepe*/ 1);
//	while (*str)
//	{
//		if (*str == '-' && *str == '+')
//			err.mix++;
//		if (*str == '-')
//			err.minus++;
//		else if (*str == '+')
//			err.plus++;
//		str++;
//	}
//	if (err.mix > 1 || err.minus > 1 || err.plus > 1)
//		return (1);
//	return (0);
//} */

int main(int argc, char **argv)
{
	head = NULL;//empty list
	printf("\n");
	system("leaks -q a.out");
	if (argc > 0)
	{
		numbers_parsing(argc, argv);
		node_print();
/* 		node_print_adi(); */
	}
	return (0);
}