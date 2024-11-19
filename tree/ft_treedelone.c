/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treedelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:22:29 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 14:41:56 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_tree.h"

void	ft_treedelone(t_tree *node, void (*del)(void *))
{
	if (!node || !del)
		return ;
	del(node->content);
	free(node);
}
