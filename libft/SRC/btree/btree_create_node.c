/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 00:50:28 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/28 00:50:29 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tr;

	tr = malloc(sizeof(t_btree));
	if (tr)
	{
		tr->item = item;
		tr->left = (void *)0;
		tr->right = (void *)0;
	}
	return (tr);
}
