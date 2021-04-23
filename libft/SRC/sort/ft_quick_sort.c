/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 22:32:22 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/22 22:32:23 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
** ENG
*/

/*
** O(n * lon(n))
*/

typedef struct		s_left_right
{
	t_list			*left;
	t_list			*right;
	t_list			*center;
}					t_left_right; 


static t_left_right ft_quicksort_right_left(int len, void *arr, t_arrinfo inf)
{
	void			*middle_el;
	int				middle;
	int				i;
	t_left_right 	left_right;
	left_right.left = NULL;
	left_right.right = NULL;
	left_right.center = NULL;
	i = 0;
	middle = len / 2;
	middle_el = arr + middle * inf.bytes;
	while (i < len)
	{
		if ((inf.fun_cmp(middle_el, arr + i * inf.bytes) > 0))
			ft_lst_cr_back(&left_right.left, arr + i * inf.bytes);
		else if (inf.fun_cmp(middle_el, arr + i * inf.bytes) == 0)
			ft_lst_cr_back(&left_right.center, arr + i * inf.bytes);
		else 
			ft_lst_cr_back(&left_right.right, arr + i * inf.bytes);	
		i++;
	}
	return (left_right);
}

void	ft_quick_sort(void *arr, int len, t_arrinfo inf)
{
	void			*arr_copy;
	int 			iter;
	int 			left_size;
	int				right_size;
	int 			center_size;
	t_left_right 	left_right;
	t_list 			*tmp;

	iter = 0;
	if (len < 2)
		return ;
	if (len == 2)
	{
		ft_bubble_sort(arr, len , inf);
		return;
	}
	left_right = ft_quicksort_right_left(len, arr, inf);
	arr_copy = malloc(len * inf.bytes);
	left_size = ft_lstsize(left_right.left);
	right_size = ft_lstsize(left_right.right);
	center_size = ft_lstsize(left_right.center);
	tmp = left_right.left;
	while (tmp)
	{
		inf.fun_swap(arr_copy + iter * inf.bytes, tmp->content);
		tmp = tmp->next;
		iter++;
	}
	tmp = left_right.center;
	while (tmp)
	{
		inf.fun_swap(arr_copy + iter * inf.bytes, tmp->content);
		tmp = tmp->next;
		iter++;
	}
	tmp = left_right.right;
	while (tmp)
	{
		inf.fun_swap(arr_copy + iter * inf.bytes, tmp->content);
		tmp = tmp->next;
		iter++;
	}
	ft_quick_sort(arr_copy, left_size, inf);
	ft_quick_sort(arr_copy + (left_size + center_size) * inf.bytes, right_size, inf);
	ft_memcpy(arr , arr_copy, len * inf.bytes);
	free(arr_copy);
}
