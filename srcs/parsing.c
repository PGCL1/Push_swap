/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:39:29 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/08 16:42:23 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int numbers_verified(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
		str++;
	}
	return (0);
}

int numbers_error(char *str)
{
	if (*str != '-' && *str != '+' && numbers_verified(str))
		return (1);
	while (*str)
	{
		if (*str == '-' && numbers_verified(str + 1))
			return (1);
		if ((*str == '-' || *str == '+') && (*(str + 1) = 32))
			return (1);
		if (*str == '+' && numbers_verified(str + 1))
			return (1);
		str++;
	}
	return (0);
}

int numbers_over_max_min(long int result)
{
	if (result > INT_MAX)
		return (1);
	else if (result < INT_MIN)
		return (1);
	else
		return (0);
}

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

void numbers_parsing(int argc, char **argv)
{
	int		i;
	char	**args;
	
	i = 0;
	while (++i < argc)
	{
		if (ft_strncmp(argv[i], " ", ft_strlen(argv[i])))
		{
			args = ft_split(argv[i], 32);
			int j = -1;
			while (args[++j])
			{
				if (numbers_error(args[j]) || numbers_over_max_min(ft_atol(args[j])))
				{
					ft_putstr_fd("Error\n", 2);
					exit(EXIT_FAILURE);
				}
				node_insert_beginning(ft_atol(args[j]));					
			}
			free_pointer2pointer(args);
		}
		else
			node_insert_beginning(ft_atol(argv[i]));
	}
}
