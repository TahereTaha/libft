/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:30:19 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/02 16:13:10 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_istipe.h"

int	ft_isprint(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (character >= ' ' && character <= '~')
	{
		return (1);
	}
	return (0);
}
