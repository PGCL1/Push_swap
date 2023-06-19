/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:13:00 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/19 12:20:13 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_rotate(t_stack **stack)
{
	t_stack	*head;

	if (ft_lstsize_pw(&(*stack)) < 2)
		return (-1);
	head = (*stack);
	ft_lstadd_back_pw(stack, ft_lstnew_pw((*stack)->data));
	(*stack) = (*stack)->next;
	free(head);
	return (0);
}

void	rotate_a(t_stack **stack)
{
	if (ft_rotate(&(*stack)) == -1)
		return ;
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_stack **stack)
{
	if (ft_rotate(&(*stack)) == -1)
		return ;
	ft_putstr_fd("rb\n", 1);
}

void	rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_rotate(&(*stack_a)) == -1 || ft_rotate(&(*stack_b)) == -1)
		return ;
	ft_putstr_fd("rr\n", 1);
}
