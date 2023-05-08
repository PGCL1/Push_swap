/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:39:29 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/05 23:09:20 by glacroix         ###   ########.fr       */
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
		if (*str == '-' && *(str + 1) == '+')
			return (1);
		if (*str == '+' && *(str + 1) == '-')
			return (1);
		if (*str == '-' && *(str + 1) == '-')
			return (1);
		if (*str == '+' && *(str + 1) == '+')
			return (1);
		if ((*str == '-' || *str == '+') && numbers_verified(str + 1))
			return (1);
		str++;
	}
	return (0);
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
				if (numbers_error(args[j]))
				{
					ft_putstr_fd("Sign Error\n", 2);
					exit(EXIT_FAILURE);
				}
				node_insert_beginning(ft_atoi(args[j]));					
			}
			free_pointer2pointer(args);
		}
		else
			node_insert_beginning(ft_atoi(argv[i]));
	}
}
