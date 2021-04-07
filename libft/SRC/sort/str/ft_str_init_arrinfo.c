/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_init_arrinfo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 04:16:00 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/07 21:24:42 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_str_init_arrinfo(t_arrinfo *str_inf)
{
	str_inf->bytes = sizeof(char *);
	str_inf->fun_cmp = ft_str_cmp;
	str_inf->fun_swap = ft_swap_str;
}

t_arrinfo	ft_param_str(void)
{
	t_arrinfo	str;

	ft_str_init_arrinfo(&str);
	return (str);
}
