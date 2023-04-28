/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:46:07 by glacroix          #+#    #+#             */
/*   Updated: 2023/04/29 00:12:22 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"

#define RESET  		"\x1B[0m"
#define RED  		"\x1B[31m"
#define GREEN	  	"\x1B[32m"
#define YELLOW  	"\x1B[33m"
#define BLUE 		"\x1B[34m"
#define MAGENTA 	"\x1B[35m"
#define CAYN  		"\x1B[36m"
#define WHITE  		"\x1B[37m"

typedef struct t_node {
    int data;
    struct t_node * next;
} t_node;

t_node *head;

void node_insert_beginning(int data);
void node_print();
void node_insert_nth_pos(int data, int position);
void node_delete_nth_pos(int position);

#endif