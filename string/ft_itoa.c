/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 08:19:14 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/02 17:42:14 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_string.h"

static int	ft_intlen(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nbr;
	int		i;

	i = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n == 0)
		str[i] = '0';
	nbr = n;
	while (nbr)
	{
		str[i--] = ft_abs(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
