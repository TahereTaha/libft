/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:45:47 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 13:30:33 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

void	ft_btreeclear(t_btree *node, void (*del)(void *))
{
	if (!node || !del)
		return ;
	if (!node->left && !node->rigth)
	{
		ft_btreedelone(node, del);
		return ;
	}
	ft_btreeclear(node->left, del);
	ft_btreeclear(node->rigth, del);
}
