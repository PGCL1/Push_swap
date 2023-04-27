/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:10:00 by glacroix          #+#    #+#             */
/*   Updated: 2023/04/27 21:03:14 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main()
{
	head = NULL;//empty list
	node_insert(6);
	node_insert(3);
	node_insert(4);
	node_insert(5);
	node_print();
	return (1);
}