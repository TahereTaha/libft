/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htable_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:42:48 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/19 17:19:36 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

#include "ft_htable.h"
#include "ft_list.h"

static void	delete_element(t_key_data *elem)
{
	free(elem->key);
	free(elem->data);
	free(elem);
}

static void	remove_node(t_list **list, t_list *node)
{
	t_list	*current_node;

	if (*list == node)
	{
		*list = node->next;
		ft_lstdelone(node, (t_del) delete_element);
		return ;
	}
	current_node = *list;
	while (current_node->next != node)
		current_node = current_node->next;
	current_node->next = node->next;
	ft_lstdelone(node, (t_del) delete_element);
}

int	ft_htable_delete(t_htable_ctx *htable, char *key)
{
	size_t		hash;
	t_list		*current_node;
	t_key_data	*current_elem;

	hash = ft_htable_hash(htable->size, key);
	if (!htable->table[hash])
		return (2);
	current_node = htable->table[hash];
	while (current_node)
	{
		current_elem = current_node->content;
		if (!ft_strncmp(key, current_elem->key, -1))
		{
			remove_node(&htable->table[hash], current_node);
			return (0);
		}
		current_node = current_node->next;
	}
	return (2);
}
