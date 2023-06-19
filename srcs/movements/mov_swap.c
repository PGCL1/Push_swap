/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:12:12 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/19 12:13:26 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_swap(t_stack **stack)
{
	t_stack	*temp;

	if (ft_lstsize_pw(&(*stack)) < 2)
		return (-1);
	temp = malloc(sizeof(t_stack));
	if (!temp)
		return (-1);
	temp->data = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = temp->data;
	temp->data = (*stack)->data;
	free(temp);
	return (0);
}

void	swap_a(t_stack **stack)
{
	if (ft_swap(stack) == -1)
		return ;
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_stack **stack)
{
	if (ft_swap(stack) == -1)
		return ;
	ft_putstr_fd("sb\n", 1);
}

void	swap_both(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_swap(stack_a) == -1 || ft_swap(stack_b) == -1)
		return ;
	ft_putstr_fd("ss\n", 1);
}
