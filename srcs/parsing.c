/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:39:29 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/10 19:30:11 by glacroix         ###   ########.fr       */
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

void	numbers_parsing(int argc, char **argv, t_stack **a)
{
	int		i;
	int		j;
	char	**args;

	i = 0;
	while (++i < argc)
	{
		args = ft_split(argv[i], 32);
		j = -1;
		while (args[++j])
		{
			if (numbers_error(args[j]) || numbers_over(ft_atol(args[j])))
			{
				ft_putstr_fd("Error\n", 2);
				exit(EXIT_FAILURE);
			}
			ft_lstadd_back_pw(a, ft_lstnew_pw(ft_atol(args[j])));
		}
		free_pointer2pointer(args);
	}
}
