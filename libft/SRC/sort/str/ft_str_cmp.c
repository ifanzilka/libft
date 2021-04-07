/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_cmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:20:29 by bmarilli          #+#    #+#             */
/*   Updated: 2021/03/20 18:20:38 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ENG
*/

/*
** RUS
**
** Функция ft_str_cmp сравнивает два строки пришедшие по адресу
**
** RETURN
** 0 - если равны
*/

int	ft_str_cmp(void *s1, void *s2)
{
	char	*one;
	char	*two;
	int		i;

	one = *(char**)s1;
	two = *(char **)s2;
	i = 0;
	while (one[i] == two[i] && two[i] && one[i])
		i++;
	if (one[i] == two[i])
		return (0);
	return (one[i] - two[i]);
}
