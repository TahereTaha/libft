/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:17:07 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/02 16:12:17 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_istipe.h"

int	ft_isdigit(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if ((character >= '0' && character <= '9'))
	{
		return (1);
	}
	return (0);
}
