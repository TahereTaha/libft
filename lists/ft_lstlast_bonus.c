/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:35:58 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/02 16:27:31 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lists.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curent_node;

	if (!lst)
		return (0);
	curent_node = lst;
	while (curent_node->next)
		curent_node = curent_node->next;
	return (curent_node);
}
