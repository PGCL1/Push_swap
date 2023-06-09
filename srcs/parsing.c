/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:39:29 by glacroix          #+#    #+#             */
/*   Updated: 2023/06/22 15:52:43 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long int	ft_atol(char *str)
{
	int				i;
	int				signage;
	unsigned int	result;

	i = 0;
	result = 0;
	signage = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (over_limit(str) == 1)
		return (2147483648);
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i++] == 45)
			signage++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = ((str[i++] - '0') + (result * 10));
	if (signage)
		return ((long int)result * -1);
	return ((long int) result);
}

int	over_limit(char *str)
{
	int	i;
	int	max_num;

	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	max_num = 0;
	while (str && str[max_num])
		max_num++;
	max_num = max_num - i - 1;
	if (max_num > 10)
		return (1);
	return (0);
}

int	check_duplicate(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	first = (*a);
	while (first && first->next != NULL)
	{
		second = first->next;
		while (second != NULL)
		{
			if (first->data == second->data)
				return (1);
			second = second->next;
		}
		first = first->next;
	}
	return (0);
}

void	numbers_parsing(int argc, char **argv, t_stack **a)
{
	int		i;
	int		j;
	char	**args;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		args = ft_split(argv[i], 32);
		while (args != NULL && args[++j])
		{
			if (numbers_error(args[j]) || numbers_over(ft_atol(args[j])))
			{
				ft_putstr_fd("Error\n", 2);
				exit(EXIT_FAILURE);
			}
			ft_lstadd_back_pw(a, ft_lstnew_pw(ft_atol(args[j])));
			if (check_duplicate(&(*a)) == 1)
			{
				ft_putstr_fd("Error\n", 2);
				exit(EXIT_FAILURE);
			}
		}
		free_pointer2pointer(args);
	}
}
