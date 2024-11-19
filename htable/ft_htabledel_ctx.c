/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htabledel_ctx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:34:01 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/19 15:45:23 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"
#include "ft_htable.h"

//	static void	del_elements

static void	delete_element(t_key_data *elem)
{
	free(elem->key);
	free(elem->data);
	free(elem);
}

void	ft_htabledel_ctx(t_htable_ctx *htable)
{
	size_t	i;

	i = 0;
	while (i < htable->size)
	{
		ft_lstclear(&htable->table[i], (t_del) delete_element);
		i++;
	}
	free(htable->table);
	free(htable);
}
