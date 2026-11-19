/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_print_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:13:40 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/19 20:36:31 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prnt_print_utils.h"
#include "libft.h"
#include "../../headers/prnt_print.h"
#include "../../headers/prnt_fmt_mrk.h"
#include "../../headers/prnt_writers.h"
#include <stdlib.h>
#include <stdio.h>

char	*prnt_add_prefix_to_hex(char *str, t_fmt_mrk *fmt_mrk, int n)
{
	char	*tmp;
	int		start;

	if (!str || n == 0)
		return (str);
	start = 0;
	if ((size_t)fmt_mrk->width == ft_strlen(str))
	{
		if (str[0] == '0')
		{
			start++;
			if (str[1] == '0')
				start++;
		}
	}
	tmp = ft_substr(str, start, -1);
	free(str);
	str = tmp;
	tmp = ft_strjoin("0x", str);
	free(str);
	return (tmp);
}

int	prnt_printf_x(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	unsigned int	n;
	char			*base;
	char			*str;

	base = "0123456789abcdef";
	n = va_arg(ptr, int);
	str = prnt_base_ltoa(base, n);
	str = prnt_add_0_to_int(n, str, fmt_mrk);
	if (fmt_mrk->hash_f)
		str = prnt_add_prefix_to_hex(str, fmt_mrk, n);
	str = prnt_add_pading(str, ' ', fmt_mrk->width, fmt_mrk->minus_f);
	return (prnt_print_str(f_write, str));
}

int	prnt_printf_ux(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	unsigned int	n;
	char			*base;
	char			*str;

	base = "0123456789ABCDEF";
	n = va_arg(ptr, int);
	str = prnt_base_ltoa(base, n);
	str = prnt_add_0_to_int(n, str, fmt_mrk);
	if (fmt_mrk->hash_f)
		str = prnt_add_prefix_to_hex(str, fmt_mrk, n);
	str = prnt_add_pading(str, ' ', fmt_mrk->width, fmt_mrk->minus_f);
	return (prnt_print_str(f_write, str));
}

int	prnt_printf_p(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	unsigned long long	n;
	char				*base;
	char				*str;

	base = "0123456789abcdef";
	n = va_arg(ptr, unsigned long long);
	if (n == 0)
		return (prnt_print_str(f_write, ft_strdup("(nil)")));
	str = prnt_base_ltoa(base, n);
	str = prnt_add_prefix_to_hex(str, fmt_mrk, n);
	str = prnt_add_pading(str, ' ', fmt_mrk->width, fmt_mrk->minus_f);
	return (prnt_print_str(f_write, str));
}
