/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htable_update.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:51:53 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/19 16:31:13 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "ft_list.h"
#include "ft_htable.h"

int		ft_htable_update(t_htable_ctx *htable, t_key_data elem)
{
	size_t		hash;
	t_list		*current_node;
	t_key_data	*current_elem;

	hash = ft_htable_hash(htable->size, elem.key);
	if (!htable->table[hash])
		return (2);
	current_node = htable->table[hash];
	while (current_node)
	{
		current_elem = current_node->content;
		if (!ft_strncmp(elem.key, current_elem->key, -1))
		{
			free(current_elem->data);
			current_elem->data = ft_strdup(elem.data);
			if (!current_elem->data)
				return (1);
			return (0);
		}
		current_node = current_node->next;
	}
	return (2);
}
