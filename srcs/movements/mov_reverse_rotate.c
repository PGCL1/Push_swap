/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_reverse_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:14:18 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/19 12:19:50 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*aux;

	if (ft_lstsize_pw(&(*stack)) < 2)
		return (-1);
	aux = (*stack);
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return (-1);
	temp->data = ft_lstlast_pw(*stack)->data;
	ft_lstadd_front_pw(&(*stack), temp);
	while (aux->next->next != NULL)
		aux = aux->next;
	free(aux->next);
	aux->next = NULL;
	return (0);
}

void	reverse_rotate_a(t_stack **stack)
{
	if (ft_reverse_rotate(&(*stack)) == -1)
		return ;
	ft_putstr_fd("rra\n", 1);
}

void	reverse_rotate_b(t_stack **stack)
{
	if (ft_reverse_rotate(&(*stack)) == -1)
		return ;
	ft_putstr_fd("rrb\n", 1);
}

void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_reverse_rotate(&(*stack_a)) == -1
		|| ft_reverse_rotate(&(*stack_b)) == -1)
		return ;
	ft_putstr_fd("rrr\n", 1);
}
