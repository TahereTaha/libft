/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htable_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:34:37 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/19 15:46:59 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "ft_htable.h"
#include "ft_list.h"

static int	add_element(t_htable_ctx *htable, t_key_data elem)
{
	t_key_data	*list_content;
	t_list		*node;
	size_t		hash;

	list_content = ft_calloc(sizeof(t_key_data), 1);
	if (!list_content)
		return (1);
	list_content->key = elem.key;
	list_content->data = elem.data;
	node = ft_lstnew(list_content);
	if (!node)
	{
		free(list_content);
		return (1);
	}
	hash = ft_htable_hash(htable->size, elem.key);
	ft_lstadd_back(&htable->table[hash], node);
	return (0);
}

//	this is currently not taking into acount colisions
int	ft_htable_add(t_htable_ctx *htable, t_key_data elem)
{
	elem.key = ft_strdup(elem.key);
	elem.data = ft_strdup(elem.data);
	if (ft_htable_check(htable, elem.key))
		return (2);
	return (add_element(htable, elem));
}
