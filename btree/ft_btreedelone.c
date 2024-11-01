/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreedelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:22:29 by tatahere          #+#    #+#             */
/*   Updated: 2024/10/30 15:22:59 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "btree.h"

void	ft_btreedelone(t_btree *node, void	(*del)(void *))
{
	if (!node || !del)
		return ;
	del(node->content);
	free(node);
}
