/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_set_fmt_mrk.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:30:03 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/19 20:35:47 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "../headers/prnt_fmt_mrk.h"

t_type	prnt_char_type(char character);
int		prnt_char_flag(char character);
int		prnt_parse_int_input(char *fmt_str);
int		prnt_parse_flags(char *fmt_str, t_fmt_mrk *fmt_mrk);

int	prnt_parse_w_p(char *fmt_str, t_fmt_mrk *fmt_mrk)
{
	int	i;

	i = 0;
	fmt_mrk->width = prnt_parse_int_input(fmt_str);
	if (fmt_mrk->width != -2)
		fmt_mrk->width_f = 1;
	if (fmt_mrk->width == -2)
		fmt_mrk->width = 0;
	while (ft_isdigit(fmt_str[i]))
		i++;
	if (fmt_str[i] == '.')
	{
		i++;
		fmt_mrk->precision = prnt_parse_int_input(&fmt_str[i]);
		if (fmt_mrk->precision == -2)
			fmt_mrk->precision = 0;
		fmt_mrk->precision_f = 1;
		while (ft_isdigit(fmt_str[i]))
			i++;
	}
	return (i);
}

void	prnt_set_fmt_mrk(char *fmt_str, t_fmt_mrk *fmt_mrk)
{
	int	i;

	i = 0;
	ft_bzero(fmt_mrk, sizeof(t_fmt_mrk));
	fmt_mrk->len = 1;
	if (fmt_str[i++] != '%')
		return ;
	i += prnt_parse_flags(&fmt_str[i], fmt_mrk);
	i += prnt_parse_w_p(&fmt_str[i], fmt_mrk);
	fmt_mrk->type = prnt_char_type(fmt_str[i++]);
	if (fmt_mrk->type == INVALID)
	{
		fmt_mrk->len = 1;
		return ;
	}
	fmt_mrk->len = i;
	fmt_mrk->valid_f = 1;
	return ;
}
