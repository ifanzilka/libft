/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_str_in_arr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:41:09 by bmarilli          #+#    #+#             */
/*   Updated: 2021/03/22 23:41:15 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** ENG
*/

/*
** RUS
**
** Функция ft_find_str_in_arr ищет строку str в массиве arr
**
** RETURN
** возвращает индекс в массиве и (-1) еесли не нашел
*/

int	ft_find_str_in_arr(char **array, char *str)
{
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	while (array[i])
	{
		if (ft_strncmp(str, array[i], len) == 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
