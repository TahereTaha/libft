/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreenew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:25:01 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 13:30:57 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_memory.h"
#include "ft_btree.h"

t_btree	*ft_btreenew(void *content)
{
	t_btree	*node;

	node = ft_calloc(1, sizeof(t_btree));
	if (!node)
		return (NULL);
	node->content = content;
	return (node);
}
