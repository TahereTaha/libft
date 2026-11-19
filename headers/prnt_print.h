/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_print.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:22:23 by tatahere          #+#    #+#             */
/*   Updated: 2024/08/05 14:20:06 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRNT_PRINT_H
# define PRNT_PRINT_H

# include "prnt_fmt_mrk.h"
# include "prnt_writers.h"
# include <stdarg.h>

int	prnt_printf_s(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);
int	prnt_printf_c(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);
int	prnt_printf_u(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);
int	prnt_printf_i(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);
int	prnt_printf_d(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);
int	prnt_printf_x(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);
int	prnt_printf_ux(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);
int	prnt_printf_p(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);
int	prnt_printf_prcnt(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);

typedef int	(*t_prnt)(t_func_writer, va_list, t_fmt_mrk *);

int	prnt_printf_mrk(t_func_writer f_write, va_list ptr, t_fmt_mrk *fmt_mrk);

#endif
