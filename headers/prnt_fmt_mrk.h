/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_fmt_mrk.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:05:16 by tatahere          #+#    #+#             */
/*   Updated: 2024/08/01 16:55:00 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRNT_FMT_MRK_H
# define PRNT_FMT_MRK_H

# define TYPES_LIST "cspdiuxX%"
# define FLAGS_LIST " 0+-#"

typedef enum e_flag
{
	SPACE,
	ZERO,
	PLUS,
	MINUS,
	HASH,
	PRECISION,
	WIDTH,
	IS_FMT_MRK
}	t_flag;

typedef enum e_type
{
	CHAR,
	STR,
	PTR,
	DEC,
	INT,
	UNS,
	L_HEX,
	U_HEX,
	PERCENT,
	INVALID = -1
}	t_type;

//	the flags stores the next things:
//	- the flags that are present (5) including the width and precision (+2)
//	- if it is actually a format_mark (+1)
typedef struct s_fmt_mrk
{
	int		space_f;
	int		zero_f;
	int		plus_f;
	int		minus_f;
	int		hash_f;
	int		precision_f;
	int		width_f;
	int		valid_f;
	int		width;
	int		precision;
	int		type;
	int		len;
}	t_fmt_mrk;

void	prnt_set_fmt_mrk(char *fmt_str, t_fmt_mrk *fmt_mrk);

#endif
