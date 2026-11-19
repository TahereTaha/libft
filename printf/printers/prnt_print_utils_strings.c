/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_print_utils_strings.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:13:40 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/19 20:37:14 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "../../headers/prnt_print.h"
#include "../../headers/prnt_fmt_mrk.h"
#include "../../headers/prnt_writers.h"

char	*prnt_make_pading(char c, int size)
{
	char	*str;

	if (size < 0)
		size = 0;
	str = calloc(sizeof(char), size + 1);
	if (!str)
		return (NULL);
	ft_memset(str, c, size);
	return (str);
}

char	*prnt_add_pading(char *str, char c, int width, int reverse)
{
	char	*pading;
	char	*tmp;

	if (!str)
		return (NULL);
	pading = prnt_make_pading(c, width - ft_strlen(str));
	if (!pading)
		return (free(str), NULL);
	if (!reverse)
		tmp = ft_strjoin(pading, str);
	else
		tmp = ft_strjoin(str, pading);
	free(pading);
	free(str);
	return (tmp);
}

int	prnt_print_str(t_func_writer f_write, char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
		if (f_write(str[i++]) == -1)
			return (free(str), -1);
	return (free(str), i);
}
