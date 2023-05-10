/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:33:10 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/10 11:33:24 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	numbers_verified(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
		str++;
	}
	return (0);
}

int	numbers_error(char *str)
{
	if (*str != '-' && *str != '+' && numbers_verified(str))
		return (1);
	while (*str)
	{
		if (*str == '-' && numbers_verified(str + 1))
			return (1);
		if ((*str == '-' || *str == '+') && (*(str + 1) == 32))
			return (1);
		if (*str == '+' && numbers_verified(str + 1))
			return (1);
		str++;
	}
	return (0);
}

int	numbers_over(long int result)
{
	if (result > INT_MAX)
		return (1);
	else if (result < INT_MIN)
		return (1);
	else
		return (0);
}