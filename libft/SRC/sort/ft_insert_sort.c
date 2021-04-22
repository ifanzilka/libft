/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 02:23:02 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/22 02:23:03 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ENG
*/

/*
** O(n ^ 2)
*/

void	ft_insert_sort_back(void *arr, int len, t_arrinfo inf)
{
	int i;
	int j;

	if (len == 1)
		return ;
	i = 1;
	while (i < len)
	{
		j = i;
		while (j > 0 && (inf.fun_cmp(arr + (j - 1) * inf.bytes, arr + j * inf.bytes)) < 0)
		{
			inf.fun_swap(arr + (j * inf.bytes), arr + (j - 1) * inf.bytes);
			j--;
		}
		i++;
	}
}

void	ft_insert_sort(void *arr, int len, t_arrinfo inf)
{
	int i;
	int j;

	if (len == 1)
		return ;
	i = 1;
	while (i < len)
	{
		j = i;
		while (j > 0 && (inf.fun_cmp(arr + (j - 1) * inf.bytes, arr + j * inf.bytes)) > 0)
		{
			inf.fun_swap(arr + (j * inf.bytes), arr + (j - 1) * inf.bytes);
			j--;
		}
		i++;
	}
}