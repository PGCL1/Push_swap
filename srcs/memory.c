/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:38:46 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/19 18:46:34 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_pointer2pointer(char **ptr)
{
	int	i;

	i = -1;
	while (ptr[++i])
		free(ptr[i]);
	free(ptr);
	ptr = NULL;
}

/* void	ft_leaks(void)
{
	system("leaks -q push_swap");
} */

void	stack_clean(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	if (!*stack)
		return ;
	while (*stack != NULL)
	{
		temp = *stack;
		free(temp);
		(*stack) = (*stack)->next;
	}
	
}
