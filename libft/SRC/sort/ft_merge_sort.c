/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 03:05:41 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/22 03:05:43 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** ENG
*/

/*
** O(n * lon(n))
*/

static void 	ft_merge_two_arr_back(void *arr1, void *arr2, int len1, int len2 , t_arrinfo inf)
{
	int		i;
	int 	j;
	void 	*arr_new; 
	int iter = 0;

	arr_new = malloc((len1 + len2) * (inf.bytes));
	ft_memcpy(arr_new, arr1, (len1 + len2) * (inf.bytes));
	i = 0;
	j = 0;
	while (i < len1 && j < len2)
	{
		if (inf.fun_cmp(arr1 + i * inf.bytes, arr2 + j * inf.bytes) > 0)
		{
			inf.fun_swap(arr1 + i * inf.bytes, arr_new + iter * inf.bytes);
			iter++;
			i++;
		}
		else
		{
			inf.fun_swap(arr2 + j * inf.bytes, arr_new + iter * inf.bytes);
			iter++;
			j++;
		}
	}
	if (i < len1)
	{
		while (i < len1)
		{
			inf.fun_swap(arr1 + i * inf.bytes, arr_new + iter * inf.bytes);
			iter++;
			i++;
		}
	}
	else
	{
		while (j < len2)
		{
			inf.fun_swap(arr2 + j * inf.bytes, arr_new + iter * inf.bytes);
			iter++;
			j++;
		}
	}
	ft_memcpy(arr1, arr_new, (len1 + len2) * (inf.bytes));
}

void	ft_merge_sort_back(void *arr, int len, t_arrinfo inf)
{
	int		middle;
	void	*left;
	void 	*right;

	if (len < 2)
		return ;
	if (len == 2)
	{
		ft_bubble_sort_back(arr, len , inf);
		return;
	}
	middle = len / 2;
	left = arr;
	ft_merge_sort_back(arr, middle, inf);
	right = arr + (middle) * inf.bytes;
	ft_merge_sort_back(right, len - middle,  inf);
	ft_merge_two_arr_back(left, right, middle, len - middle, inf);
}


void 	ft_merge_two_arr(void *arr1, void *arr2, int len1, int len2 , t_arrinfo inf)
{
	int		i;
	int 	j;
	void 	*arr_new; 
	int iter = 0;

	arr_new = malloc((len1 + len2) * (inf.bytes));
	ft_memcpy(arr_new, arr1, (len1 + len2) * (inf.bytes));
	i = 0;
	j = 0;
	while (i < len1 && j < len2)
	{
		if (inf.fun_cmp(arr1 + i * inf.bytes, arr2 + j * inf.bytes) < 0)
		{
			inf.fun_swap(arr1 + i * inf.bytes, arr_new + iter * inf.bytes);
			iter++;
			i++;
		}
		else
		{
			inf.fun_swap(arr2 + j * inf.bytes, arr_new + iter * inf.bytes);
			iter++;
			j++;
		}
	}
	if (i < len1)
	{
		while (i < len1)
		{
			inf.fun_swap(arr1 + i * inf.bytes, arr_new + iter * inf.bytes);
			iter++;
			i++;
		}
	}
	else
	{
		while (j < len2)
		{
			inf.fun_swap(arr2 + j * inf.bytes, arr_new + iter * inf.bytes);
			iter++;
			j++;
		}
	}
	ft_memcpy(arr1, arr_new, (len1 + len2) * (inf.bytes));
}

void	ft_merge_sort(void *arr, int len, t_arrinfo inf)
{
	int		middle;
	void	*left;
	void 	*right;

	if (len < 2)
		return ;
	if (len == 2)
	{
		ft_bubble_sort(arr, len , inf);
		return;
	}
	middle = len / 2;
	left = arr;
	ft_merge_sort(arr, middle, inf);
	right = arr + (middle) * inf.bytes;
	ft_merge_sort(right, len - middle,  inf);
	ft_merge_two_arr(left, right, middle, len - middle, inf);
}
