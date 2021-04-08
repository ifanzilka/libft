/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_bubble_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:23:55 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/07 21:09:54 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_bubble_sort(char **array, int len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - 1)
		{
			if (ft_str_cmp((array + j), (array + j + 1)) > 0)
			{
				ft_swap_str(&array[j], &array[j + 1]);
			}
			j++;
		}
		i++;
	}
}
