/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_str_ind.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:26:03 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/07 21:05:02 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ENG
*/

/*
** RUS
**
** Функция ft_del_str_ind заменет указатель на массив на новый к котором
** не будет элемента с индексом index
**
** RETURN
** возвращает индекс в массиве и (-1) еесли не нашел
*/

void	ft_del_str_ind(char ***array, int index)
{
	char	**new;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_arrlen(*array);
	if ((new = (char **)malloc(sizeof(char *) * len)) == NULL)
		return ;
	while (j < len)
	{
		if (j == index)
		{
			j++;
			continue;
		}
		if ((new[i] = ft_strdup((*array)[j])) == NULL)
			return ;
		i++;
		j++;
	}
	new[i] = NULL;
	ft_free_arr(*array, len);
	*array = new;
}
