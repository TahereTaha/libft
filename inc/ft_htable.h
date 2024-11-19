/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htable.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:13:56 by tatahere          #+#    #+#             */
/*   Updated: 2024/11/19 14:37:32 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HTABLE_H
# define FT_HTABLE_H

//	in this implementation
//	the hashes to all the keys
//	will point to linked lists
//	that will store all
//	the thiferent maches

# include <aio.h>
# include "ft_list.h"

//	contain all the data about the hash table
typedef struct s_htable_ctx
{
	size_t	size;
	t_list	**table;
}	t_htable_ctx;

typedef struct s_key_data
{
	char *key;
	char *data;
}	t_key_data;

t_htable_ctx	*ft_htablenew_ctx(size_t size);
void			ft_htabledel_ctx(t_htable_ctx *htable);
size_t			ft_htable_hash(size_t size, char *key);
int				ft_htable_check(t_htable_ctx *htable, char *key);
int				ft_htable_add(t_htable_ctx *htable, t_key_data key_data);
char			*ft_htable_read(t_htable_ctx *htable, char *key);
int				ft_htable_update(t_htable_ctx *htable, t_key_data key_data);
int				ft_htable_delete(t_htable_ctx *htable, char *key);

#endif
