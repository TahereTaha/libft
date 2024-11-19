/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htable_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:23:27 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/19 15:30:49 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_htable.h"
#include "ft_list.h"

int	ft_htable_check(t_htable_ctx *htable, char *key)
{
	size_t		hash;
	t_list		*current_elem;
	t_key_data	*elem;

	hash = ft_htable_hash(htable->size, key);
	if (!htable->table[hash])
		return (0);
	current_elem = htable->table[hash];
	while (current_elem)
	{
		elem = current_elem->content;
		if (!ft_strncmp(key, elem->key, -1))
			return (1);
		current_elem = current_elem->next;
	}
	return (0);
}
