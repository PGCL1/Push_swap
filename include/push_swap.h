/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:46:07 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/19 13:10:42 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define RESET  	"\x1B[0m"
# define RED  		"\x1B[31m"
# define GREEN	  	"\x1B[32m"
# define YELLOW  	"\x1B[33m"
# define BLUE 		"\x1B[34m"
# define MAGENTA 	"\x1B[35m"
# define CAYN  		"\x1B[36m"
# define WHITE  	"\x1B[37m"

typedef struct t_stack {
	int				data;
	struct t_stack	*next;
}				t_stack;

/*ft_bzero(&a, sizeof(t_stack))*/

/*------------------------------MOVEMENTS-------------------------------*/
int				ft_push(t_stack **stack, int content);
int				ft_swap(t_stack **stack);
int				ft_rotate(t_stack **stack);
int				ft_reverse_rotate(t_stack **stack);

/*-------------------------------MEMORY---------------------------------*/
void			free_pointer2pointer(char **ptr);
void			ft_leaks(void);
void			stack_clean(t_stack **stack);

/*---------------------------------PRINT---------------------------------*/
void			node_print(t_stack *stack);
void			node_print_a(t_stack *stack);
void			node_print_b(t_stack *stack);
void			node_print_adi(t_stack *a);

void			node_reverse(t_stack *list);

/*---------------------------LIST FUNCTIONS-----------------------------*/
t_stack			*ft_lstnew_pw(int content);
t_stack			*ft_lstlast_pw(t_stack *lst);
void			ft_lstadd_back_pw(t_stack **lst, t_stack *new);
void			ft_lstadd_front_pw(t_stack **lst, t_stack *new);
int				ft_lstsize_pw(t_stack *lst);


/*-------------------------------PARSING---------------------------------*/
void			numbers_parsing(int argc, char **argv, t_stack **a);
int				numbers_over(long int result);
int				numbers_verified(char *str);
int				numbers_error(char *str);
long int		ft_atol(char *str);
int				check_duplicate(t_stack **a);

/*-------------------------------SORTING---------------------------------*/
void			stack_sort(t_stack **a);
void			stack_moves(t_stack **a, t_stack **b);

#endif