/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 07:19:34 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/02 17:05:26 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_toupper(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (character >= 'a' && character <= 'z')
		return (character - 32);
	return (character);
}
