/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:35:58 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 13:29:55 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*curent_node;

	if (!lst)
		return (0);
	size = 1;
	curent_node = lst;
	while (curent_node->next)
	{
		curent_node = curent_node->next;
		size++;
	}
	return (size);
}
