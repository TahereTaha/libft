/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_writers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:05:16 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/23 19:49:17 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRNT_WRITERS_H
# define PRNT_WRITERS_H

typedef int	(*t_func_writer)(char character, ...);

int	prnt_write(char character, ...);
int	prnt_write_err(char character, ...);

#endif
