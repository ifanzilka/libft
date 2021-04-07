/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 17:23:07 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/07 21:16:30 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubble_sort(void *arr, int len, t_arrinfo inf)
{
	int i;
	int j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - 1)
		{
			if (inf.fun_cmp(arr + j * inf.bytes, arr + (j + 1) * inf.bytes) > 0)
			{
				inf.fun_swap(arr + (j * inf.bytes), arr + (j + 1) * inf.bytes);
			}
			j++;
		}
		i++;
	}
}
