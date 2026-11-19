/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_print_integers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:13:40 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/19 20:37:52 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prnt_print_utils.h"
#include "libft.h"
#include "../../headers/prnt_print.h"
#include "../../headers/prnt_fmt_mrk.h"
#include "../../headers/prnt_writers.h"
#include <stdlib.h>
#include <stdio.h>

int	prnt_printf_i(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	long	n;
	char	*str;

	n = va_arg(ptr, int);
	str = ft_ltoa(ft_abs(n));
	str = prnt_add_0_to_int(n, str, fmt_mrk);
	str = prnt_add_sign_to_int(n, str, fmt_mrk);
	str = prnt_add_pading(str, ' ', fmt_mrk->width, fmt_mrk->minus_f);
	return (prnt_print_str(f_write, str));
}

int	prnt_printf_d(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	return (prnt_printf_i(f_write, ptr, fmt_mrk));
}

int	prnt_printf_u(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	long	n;
	char	*str;
	char	c;

	n = va_arg(ptr, unsigned int);
	str = ft_ltoa(n);
	c = ' ';
	if (fmt_mrk->zero_f && !fmt_mrk->minus_f && \
			fmt_mrk->precision < (long)ft_strlen(str))
		c = '0';
	str = prnt_add_pading(str, '0', fmt_mrk->precision, 0);
	str = prnt_add_pading(str, c, fmt_mrk->width, fmt_mrk->minus_f);
	return (prnt_print_str(f_write, str));
}
