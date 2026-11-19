/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_print_strings.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:13:40 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/19 20:36:52 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "prnt_print_utils.h"
#include "libft.h"
#include "../../headers/prnt_print.h"
#include "../../headers/prnt_fmt_mrk.h"
#include "../../headers/prnt_writers.h"

int	prnt_printf_s(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	char	*str;
	char	*tmp;
	int		return_val;

	str = va_arg(ptr, char *);
	if (!str)
		return (prnt_print_str(f_write, ft_strdup("(null)")));
	str = ft_strdup(str);
	if ((size_t)fmt_mrk->precision < ft_strlen(str) && fmt_mrk->precision_f)
		str[fmt_mrk->precision] = '\0';
	tmp = prnt_add_pading(str, ' ', \
			fmt_mrk->width * fmt_mrk->width_f, fmt_mrk->minus_f);
	if (!tmp)
		return (-1);
	return_val = prnt_print_str(f_write, tmp);
	return (return_val);
}

int	prnt_c_null(t_func_writer f_write, int width, int minus)
{
	char	*str;
	int		return_val;

	return_val = 0;
	str = prnt_add_pading(ft_strdup(""), ' ', width - 1, 0);
	if (minus && f_write('\0') == -1)
		return (-1);
	if (prnt_print_str(f_write, str) == -1)
		return (-1);
	if (!minus && f_write('\0') == -1)
		return (-1);
	if (width == 0)
		width = 1;
	return (width);
}

int	prnt_printf_c(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	char	c;
	char	*str;
	int		return_val;
	char	*tmp;

	c = va_arg(ptr, int);
	if (c == '\0')
		return (prnt_c_null(f_write, fmt_mrk->width, fmt_mrk->minus_f));
	str = ft_calloc(2, sizeof(char));
	if (!str)
		return (-1);
	str[0] = c;
	tmp = prnt_add_pading(str, ' ', fmt_mrk->width, fmt_mrk->minus_f);
	if (c == '\0')
		tmp[ft_strlen(tmp) - 1] = '\0';
	return_val = prnt_print_str(f_write, tmp);
	if (c == '\0')
		return_val++;
	return (return_val);
}

int	prnt_printf_prcnt(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	int	return_value;

	if (!ptr || !fmt_mrk)
		return (0);
	return_value = f_write('%');
	return (return_value);
}
