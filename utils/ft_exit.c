/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 06:38:16 by tatahere          #+#    #+#             */
/*   Updated: 2024/10/16 06:46:38 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_exit(int exit_status, char *str)
{
	if (exit_status)
	{
		ft_putstr_fd(str, 2);
		exit(exit_status);
	}
	ft_putstr_fd(str, 1);
	exit(exit_status);
}



