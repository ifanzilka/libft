/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_init_arrinfo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 04:23:07 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/07 21:20:04 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_int_init_arrinfo(t_arrinfo *str_inf)
{
	str_inf->bytes = sizeof(int);
	str_inf->fun_cmp = ft_cmp_int;
	str_inf->fun_swap = ft_swap_int;
}

t_arrinfo	ft_param_int(void)
{
	t_arrinfo	integer;

	ft_int_init_arrinfo(&integer);
	return (integer);
}
