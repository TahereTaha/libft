/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 06:21:41 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/02 16:15:25 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree
{
	void			*content;
	struct s_btree	*left;
	struct s_btree	*rigth;
}	t_btree;

t_btree	*ft_btreenew(void *content);
void	ft_btreedelone(t_btree *node, void (*del)(void *));
void	ft_btreeclear(t_btree *node, void (*del)(void *));

#endif
