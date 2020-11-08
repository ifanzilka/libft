/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 00:13:58 by bmarilli          #+#    #+#             */
/*   Updated: 2020/10/30 19:48:00 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ENG
*/

/*
** RUS
**
** Функция strchr() находит первое вхождение 'c' (преобразованное в символ)
** в строке, на которую указывает s. Завершающий нулевой символ считается
** частью строки; поэтому, если c равен "\0",
** функции находят завершающий символ "\0"
**
** RETURN
**
** возвращают указатель на расположенный символ или NULL,
** если символ не появляется в строке.
*/

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		n;

	n = (int)ft_strlen(s);
	i = 0;
	while (i <= n)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
