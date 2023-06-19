/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:46:07 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/19 19:21:20 by glacroix         ###   ########.fr       */
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
	int				index;
	struct t_stack	*next;
}				t_stack;

/*ft_bzero(&a, sizeof(t_stack))*/

/*------------------------------MOVEMENTS-------------------------------*/
void			ft_push(t_stack **stack, int content);
void			push_a(t_stack **stack_a, t_stack **stack_b);
void			push_b(t_stack **stack_a, t_stack **stack_b);
int				ft_swap(t_stack **stack);
void			swap_a(t_stack **stack);
void			swap_b(t_stack **stack);
void			swap_both(t_stack **stack_a, t_stack **stack_b);
int				ft_rotate(t_stack **stack);
void			rotate_a(t_stack **stack);
void			rotate_b(t_stack **stack);
void			rotate_both(t_stack **stack_a, t_stack **stack_b);
int				ft_reverse_rotate(t_stack **stack);
void			reverse_rotate_a(t_stack **stack);
void			reverse_rotate_b(t_stack **stack);
void			reverse_rotate_both(t_stack **stack_a, t_stack **stack_b);

/*-------------------------------MEMORY---------------------------------*/
void			free_pointer2pointer(char **ptr);
void			ft_leaks(void);
void			stack_clean(t_stack **stack);
t_stack			*stack_create(t_stack *stack);

/*---------------------------LIST FUNCTIONS-----------------------------*/
t_stack			*ft_lstnew_pw(int content);
t_stack			*ft_lstlast_pw(t_stack *lst);
void			ft_lstadd_back_pw(t_stack **lst, t_stack *new);
void			ft_lstadd_front_pw(t_stack **lst, t_stack *new);
int				ft_lstsize_pw(t_stack **lst);

/*-------------------------------PARSING---------------------------------*/
void			numbers_parsing(int argc, char **argv, t_stack **a);
int				numbers_over(long int result);
int				numbers_verified(char *str);
int				numbers_error(char *str);
long int		ft_atol(char *str);
int				check_duplicate(t_stack **a);

/*-------------------------------SORTING---------------------------------*/
void			stack_sort(t_stack **a, t_stack **b, int size);
int				stack_sorted(t_stack *copy);
void			stack_sort_small_2(t_stack **a);
void			stack_sort_small_3(t_stack **a);
void			stack_sort_small_4(t_stack **a, t_stack **b);
void			stack_sort_small_5(t_stack **a, t_stack **b);
void			ft_swap_int(int *x, int *y);
void			data2index(t_stack **a);
void			radix_sort(t_stack **a, t_stack **b, int size);

/*------------------------------ARITHMETIC---------------------------------*/
int				stack_min_position(t_stack *stack, int min);
void			stack_push_min(int i, t_stack **a, t_stack **b);
void			stack_push_5min(int i, t_stack **a, t_stack **b);
int				stack_min_data(t_stack *copy);
int				stack_max_data(t_stack *copy);
void			dupindex(t_stack **stack);

#endif