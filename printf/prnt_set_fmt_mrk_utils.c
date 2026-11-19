/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_set_fmt_mrk_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:30:03 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/19 20:36:06 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "../headers/prnt_fmt_mrk.h"

t_type	prnt_char_type(char character)
{
	int	return_value;

	if (!ft_strchr(TYPES_LIST, character))
		return (INVALID);
	return_value = ft_strchr(TYPES_LIST, character) - TYPES_LIST;
	return (return_value);
}

int	prnt_char_flag(char character)
{
	int	return_value;

	if (!ft_strchr(FLAGS_LIST, character))
		return (INVALID);
	return_value = ft_strchr(FLAGS_LIST, character) - FLAGS_LIST;
	return (return_value);
}

int	prnt_parse_int_input(char *fmt_str)
{
	int	first;
	int	second;

	first = 0;
	second = 0;
	if (!ft_isdigit(*fmt_str))
		return (-2);
	while (ft_isdigit(*fmt_str))
	{
		first = (first * 10) + (*fmt_str++ - '0');
		if (first < second)
			return (-1);
		second = first;
	}
	return (first);
}

int	prnt_parse_flags(char *fmt_str, t_fmt_mrk *fmt_mrk)
{
	int	*flags;
	int	flag;
	int	i;

	i = 0;
	flags = (int *)fmt_mrk;
	while (ft_strchr(FLAGS_LIST, fmt_str[i]))
	{
		flag = prnt_char_flag(fmt_str[i]);
		flags[flag] = 1;
		i++;
	}
	return (i);
}
