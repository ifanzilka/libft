/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 01:07:24 by bmarilli          #+#    #+#             */
/*   Updated: 2021/04/28 01:07:37 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmp)(void*, void*))
{
	t_btree	*tmp;

	tmp = *root;
	if (!*root)
	{
		*root = btree_create_node(item);
	}
	else
	{
		if (cmp(item, tmp->item) < 0)
			btree_insert_data(&(tmp->left), item, (*cmp));
		else
			btree_insert_data(&(tmp->right), item, (*cmp));
	}
}