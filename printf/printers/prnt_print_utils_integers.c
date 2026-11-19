/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_print_utils_integers.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:13:40 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/19 20:37:03 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prnt_print_utils.h"
#include "libft.h"
#include "../../headers/prnt_print.h"
#include "../../headers/prnt_fmt_mrk.h"
#include "../../headers/prnt_writers.h"
#include <stdlib.h>
#include <stdio.h>

char	*prnt_add_0_to_int(int n, char *str, t_fmt_mrk *fmt_mrk)
{
	size_t	width;

	width = fmt_mrk->precision;
	if (fmt_mrk->zero_f && !fmt_mrk->minus_f && width <= ft_strlen(str))
		width = fmt_mrk->width;
	if ((n < 0 || fmt_mrk->space_f || fmt_mrk->plus_f) && \
			width >= (size_t)fmt_mrk->width)
		width--;
	str = prnt_add_pading(str, '0', width, 0);
	width = width - fmt_mrk->precision + fmt_mrk->width;
	return (str);
}

char	*prnt_add_sign_to_int(int n, char *str, t_fmt_mrk *fmt_mrk)
{
	if (n < 0)
		str = prnt_add_pading(str, '-', ft_strlen(str) + 1, 0);
	else if (fmt_mrk->plus_f)
		str = prnt_add_pading(str, '+', ft_strlen(str) + 1, 0);
	else if (fmt_mrk->space_f)
		str = prnt_add_pading(str, ' ', ft_strlen(str) + 1, 0);
	return (str);
}

int	prnt_base_intlen(int base_n, unsigned long long n)
{
	int	int_len;

	int_len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		int_len++;
		n = n / base_n;
	}
	return (int_len);
}

char	*prnt_base_ltoa(char *base, unsigned long long n)
{
	int		base_n;
	int		int_len;
	char	*str;

	base_n = ft_strlen(base);
	int_len = prnt_base_intlen(base_n, n);
	str = ft_calloc(int_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (int_len--)
	{
		str[int_len] = base[n % base_n];
		n = n / base_n;
	}
	return (str);
}
