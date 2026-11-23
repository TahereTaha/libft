/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:32:19 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/23 19:50:01 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"
#include "../headers/prnt_writers.h"
#include "../headers/prnt_fmt_mrk.h"
#include "../headers/prnt_print.h"

int	ft_printfe(char *fmt_str, ...)
{
	int				n_bytes;
	int				return_value;
	va_list			ptr;
	t_fmt_mrk		fmt_mrk;

	va_start(ptr, fmt_str);
	return_value = 0;
	while (*fmt_str)
	{
		prnt_set_fmt_mrk(fmt_str, &fmt_mrk);
		if (fmt_mrk.width == -1 || fmt_mrk.precision == -1)
			return (-1);
		if (fmt_mrk.valid_f)
			n_bytes = prnt_printf_mrk(&prnt_write_err, ptr, &fmt_mrk);
		else
			n_bytes = prnt_write_err(*fmt_str);
		if (n_bytes < 0)
			return (-1);
		fmt_str += fmt_mrk.len;
		return_value += n_bytes;
	}
	va_end(ptr);
	return (return_value);
}
