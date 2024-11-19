/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:25:01 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 15:05:41 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_memory.h"
#include "ft_tree.h"

t_tree	*ft_treenew(void *content)
{
	t_tree	*node;

	node = ft_calloc(1, sizeof(t_tree));
	if (!node)
		return (NULL);
	node->content = content;
	return (node);
}
