/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_print_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:22:23 by tatahere          #+#    #+#             */
/*   Updated: 2024/08/04 10:25:41 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRNT_PRINT_UTILS_H
# define PRNT_PRINT_UTILS_H

# include "../../headers/prnt_fmt_mrk.h"
# include "../../headers/prnt_writers.h"
# include <stdarg.h>

char	*prnt_make_pading(char c, int size);
char	*prnt_add_pading(char *str, char c, int width, int reverse);
int		prnt_print_str(t_func_writer f_write, char *str);
char	*prnt_add_0_to_int(int n, char *str, t_fmt_mrk *fmt_mrk);
char	*prnt_add_sign_to_int(int n, char *str, t_fmt_mrk *fmt_mrk);
int		prnt_base_intlen(int base_n, unsigned long long n);
char	*prnt_base_ltoa(char *base, unsigned long long n);

#endif
