/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeadd_child.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:47:13 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 14:50:02 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"

void	ft_treeadd_child(t_tree *parent, t_tree *child)
{
	if (!parent || !child)
		return ;
	if (parent->child)
		parent->child->brother = child;
	else
		parent->child = child;
}
