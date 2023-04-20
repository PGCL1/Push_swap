/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:46:07 by glacroix          #+#    #+#             */
/*   Updated: 2023/04/20 20:58:49 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../42Libft/libft.h"

#define RESET  		"\x1B[0m"
#define RED  		"\x1B[31m"
#define GREEN	  	"\x1B[32m"
#define YELLOW  	"\x1B[33m"
#define BLUE 		"\x1B[34m"
#define MAGENTA 	"\x1B[35m"
#define CAYN  		"\x1B[36m"
#define WHITE  		"\x1B[37m"

typedef struct s_node {
    int number;
    struct s_node * next;
} t_node;


#endif