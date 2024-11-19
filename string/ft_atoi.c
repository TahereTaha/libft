/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:11:16 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 14:03:49 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

#include "ft_string.h"
#include "ft_istipe.h"

int	ft_atoi(const char *str)
{
	int		nbr;
	size_t	i;
	int		sign;

	nbr = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] == '0')
		i++;
	while (ft_isdigit(str[i]))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
