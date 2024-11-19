/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:55:09 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/13 14:04:36 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_write.h"
#include "ft_string.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}
