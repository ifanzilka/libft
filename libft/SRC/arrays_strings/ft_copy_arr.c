/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 14:39:07 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/07 21:02:19 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ENG
*/

/*
** RUS
**
** Функция ft_copy_arr копирует двумерный массив строк
** **new -> указатель на  массив новых строк
** **old -> указатель на  массив строк
** Гарантировано что в new достаточно паммяти на укзаатли
** len -> кол-во строк, массив заканчивается NULL
**
** RETURN
**
** Функция ft_copy_arr() возвращает 0 если копирование произошло успешно
** и 1 если произошла ошибка
*/

int	ft_copy_arr(char **new, char **old, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		new[i] = ft_strdup(old[i]);
		if (new[i] == NULL)
			return (1);
		i++;
	}
	new[i] = NULL;
	return (0);
}