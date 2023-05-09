/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:46:07 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/09 18:59:45 by glacroix         ###   ########.fr       */
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

void		node_print(t_stack *a);
t_stack		*ft_lstlast_pw(t_stack *lst);
void		ft_lstadd_back_pw(t_stack **lst, t_stack *new);
t_stack		*ft_lstnew_pw(int content);
void		node_reverse(t_stack *list);
void		free_pointer2pointer(char **ptr);
void		numbers_parsing(int argc, char **argv, t_stack **a);
void		node_print_adi(void);
long int	ft_atol(char *str);
int			numbers_over(long int result);

#endif