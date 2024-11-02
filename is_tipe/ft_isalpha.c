/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 10:52:50 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/02 15:59:43 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_istipe.h"

int	ft_isalpha(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if ((character >= 'A' && character <= 'Z') || \
		(character >= 'a' && character <= 'z'))
	{
		return (1);
	}
	return (0);
}
