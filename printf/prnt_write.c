/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnt_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:12:42 by tatahere          #+#    #+#             */
/*   Updated: 2024/07/23 17:38:26 by tatahere         ###   ########.fr       */
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
