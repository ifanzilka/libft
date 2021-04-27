/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 00:27:53 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/28 00:27:54 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ENG
*/

/*
** RUS
**
** Функция ft_swap
**
** RETURN
*/

void	ft_swap(void *p1, void *p2, int bytes)
{
    void    *ptr;

    ptr = malloc(bytes);
    ft_memcpy(ptr, p1, bytes);
    ft_memcpy(p1, p2, bytes);
    ft_memcpy(p2, ptr, bytes);
    free(ptr);
}
