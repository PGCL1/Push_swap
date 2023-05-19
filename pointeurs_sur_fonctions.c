/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeurs_sur_fonctions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:16:06 by glacroix          #+#    #+#             */
/*   Updated: 2023/05/19 13:23:53 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int main()
{
	void (*f)(char *, int);
	f = &ft_putendl_fd;
	f("hello", 2);
	return(0);
}



