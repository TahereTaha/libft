/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htable_read.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:11:37 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/19 15:38:28 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "ft_htable.h"

char	*ft_htable_read(t_htable_ctx *htable, char *key)
{
	size_t		hash;
	t_list		*current_elem;
	t_key_data	*elem;

	hash = ft_htable_hash(htable->size, key);
	if (!htable->table[hash])
		return (NULL);
	current_elem = htable->table[hash];
	while (current_elem)
	{
		elem = current_elem->content;
		if (!ft_strncmp(key, elem->key, -1))
			return (ft_strdup(elem->data));
		current_elem = current_elem->next;
	}
	return (NULL);
}
