/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htablenew_ctx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:16:19 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/19 12:16:44 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_htable.h"

t_htable_ctx	*ft_htablenew_ctx(size_t size)
{
	t_htable_ctx	*htable;

	htable = ft_calloc(sizeof(t_htable_ctx), 1);
	if (!htable)
		return (NULL);
	htable->size = size;
	htable->table = ft_calloc(sizeof(t_list *), size);
	if (!htable->table)
	{
		free(htable);
		return (NULL);
	}
	return (htable);
}
