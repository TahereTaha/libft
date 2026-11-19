/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:13:40 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/19 20:37:37 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/prnt_print.h"
#include "../headers/prnt_fmt_mrk.h"
#include "../headers/prnt_writers.h"
#include <stdio.h>
#include <aio.h>

int	prnt_printf_mrk(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk)
{
	const t_prnt	printers[9] = \
	{&prnt_printf_c, &prnt_printf_s, &prnt_printf_p, &prnt_printf_d, \
	&prnt_printf_i,	&prnt_printf_u, &prnt_printf_x, &prnt_printf_ux, \
	&prnt_printf_prcnt};

	return (printers[fmt_mrk->type](f_write, ptr, fmt_mrk));
}
