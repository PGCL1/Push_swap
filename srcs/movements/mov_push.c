/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:11:21 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/19 12:13:20 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_push(t_stack **stack, int content)
{
	t_stack	*aux;

	aux = ft_lstnew_pw(content);
	ft_lstadd_front_pw(&(*stack), aux);
	(*stack) = aux;
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (!(*stack_b))
		return ;
	ft_push(&(*stack_a), (*stack_b)->data);
	ft_putstr_fd("pa\n", 1);
	temp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	free(temp);
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	temp = NULL;
	if (!(*stack_a))
		return ;
	ft_push(&(*stack_b), (*stack_a)->data);
	temp = (*stack_a);
	ft_putstr_fd("pb\n", 1);
	(*stack_a) = (*stack_a)->next;
	free(temp);
}
