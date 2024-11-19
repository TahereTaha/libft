/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:45:47 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 15:06:36 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_tree.h"

void	ft_treeclear(t_tree *node, void (*del)(void *))
{
	if (!node || !del)
		return ;
	ft_treeclear(node->brother, del);
	ft_treeclear(node->child, del);
	ft_treedelone(node, del);
}
