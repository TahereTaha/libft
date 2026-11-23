/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:12:42 by tatahere          #+#    #+#             */
/*   Updated: 2026/11/23 19:48:43 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/prnt_writers.h"
#include <unistd.h>
#include <stdarg.h>

int	prnt_write(char character, ...)
{
	int	return_value;

	return_value = write(1, &character, 1);
	return (return_value);
}

int	prnt_write_err(char character, ...)
{
	int	return_value;

	return_value = write(2, &character, 1);
	return (return_value);
}
