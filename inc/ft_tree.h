/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 06:21:41 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 15:06:10 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TREE_H
# define FT_TREE_H

typedef struct s_tree
{
	void			*content;
	struct s_tree	*brother;
	struct s_tree	*child;
}	t_tree;

t_tree	*ft_treenew(void *content);
void	ft_treedelone(t_tree *node, void (*del)(void *));
void	ft_treeclear(t_tree *node, void (*del)(void *));
void	ft_treeadd_child(t_tree *parent, t_tree *child);

#endif
