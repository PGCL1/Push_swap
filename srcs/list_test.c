/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:54:52 by glacroix          #+#    #+#             */
/*   Updated: 2023/04/27 20:45:53 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* t_node  *ft_create_node(t_node *n, int num)
{
    n->number = num;
    n->next = NULL;
    return (n);
}
void    ft_fill_list(t_node *v, int num)
{
    t_node	*n;
    t_node	*aux;
    n = ft_calloc(sizeof(t_node), 1);
    n = ft_create_node(n, num);
    v->len++;
    if (!v->a->cab)
        v->a->cab = n;
    else
    {
        aux = v->a->cab;
        while (aux->next)
            aux = aux->next;
        aux->next = n;
    }
} */