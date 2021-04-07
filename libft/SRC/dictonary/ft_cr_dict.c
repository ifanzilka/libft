/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cr_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 00:05:28 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/07 20:53:25 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dict	*ft_cr_dict(void *key, void *value)
{
	t_dict *new;

	new = malloc(sizeof(t_dict));
	if (!new)
		return (NULL);
	new->key = key;
	new->value = value;
	return (new);
}
