/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htable_hash.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:40:26 by tatahere          #+#    #+#             */
/*   Updated: 2025/01/13 15:24:23 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include "ft_htable.h"

size_t	ft_htable_hash(size_t table_size, char *key)
{
	size_t	n;
	int		i;

	n = 0;
	i = 0;
	while (key[i])
	{
		if (n)
			n *= key[i];
		else
			n = key[i];
		i++;
	}
	return (n % table_size);
}
