/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:10:00 by glacroix          #+#    #+#             */
/*   Updated: 2023/04/28 18:29:36 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main()
{
	head = NULL;//empty list
	node_insert_beginning(6);
	node_delete_nth_pos(1);
	node_insert_nth_pos(4, 1);
	node_insert_nth_pos(5, 2);
	node_insert_nth_pos(6, 3);
	node_delete_nth_pos(3);
	node_insert_nth_pos(7, 3);
	node_delete_nth_pos(3);
	
	node_print();
	return (1);
}