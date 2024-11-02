/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 07:35:58 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/02 17:04:54 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_tolower(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (character >= 'A' && character <= 'Z')
		return (character + 32);
	return (character);
}
