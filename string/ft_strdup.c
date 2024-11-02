/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:31:33 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/02 17:40:27 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_string.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*dup;

	len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (0);
	ft_strlcpy(dup, (char *)str, len + 1);
	return (dup);
}
