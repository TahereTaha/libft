# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 07:58:21 by tatahere          #+#    #+#              #
#    Updated: 2024/11/19 17:23:49 by tatahere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
AR			= ar rc
RF			= rm -rf
CC			= cc

CFLAGS		= -Wall -Wextra -Werror -I./inc -g -MMD

NAME		= libft.a
HEADER		= libft.h

ARRAY		=	ft_bzero.c			\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memmove.c		\
				ft_memset.c			\

SRC			+=	$(ARRAY)

IS_TIPE		=	ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_isspace.c		\

SRC			+=	$(IS_TIPE)

MEMORY		=	ft_calloc.c			\

SRC			+=	$(MEMORY)

STRING		=	ft_toupper.c		\
				ft_tolower.c		\
				ft_strlen.c			\
				ft_strlcpy.c		\
				ft_strlcat.c		\
				ft_strchr.c			\
				ft_strrchr.c		\
				ft_strncmp.c		\
				ft_strnstr.c		\
				ft_strdup.c			\
				ft_substr.c			\
				ft_strjoin.c		\
				ft_strtrim.c		\
				ft_split.c			\
				ft_strmapi.c		\
				ft_striteri.c		\
				ft_atoi.c			\
				ft_itoa.c			\

SRC			+=	$(STRING)

WRITE		=	ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\

SRC			+=	$(WRITE)

#====  EXTENDED  ====#

LIST		=	ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\

SRC			+=	$(LIST)

BTREE		=	ft_btreeclear.c		\
				ft_btreedelone.c	\
				ft_btreenew.c		\

SRC			+=	$(BTREE)

TREE		=	ft_treeclear.c		\
				ft_treedelone.c		\
				ft_treenew.c		\
				ft_treeadd_child.c	\

SRC			+=	$(TREE)

HTABLE		=	ft_htablenew_ctx.c	\
				ft_htabledel_ctx.c	\
				ft_htable_hash.c	\
				ft_htable_check.c	\
				ft_htable_add.c		\
				ft_htable_read.c	\
				ft_htable_update.c	\
				ft_htable_delete.c	\

SRC			+=	$(HTABLE)

DEP		= $(addprefix bin/, ${SRC:.c=.d})
OBJ		= $(addprefix bin/, ${SRC:.c=.o})

VPATH	=	array:is_tipe:memory:string:write:list:btree:tree:htable

# build the library
all: ./bin/ $(NAME) Makefile

-include $(DEP)

./bin/:
	mkdir	bin

bonus: all

$(NAME): $(OBJ) Makefile
	$(AR) $(NAME) $(OBJ)

bin/%.o: %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RF) bin/

fclean: clean
	$(RF) $(NAME)

re: fclean all

.PHONY: all clean fclean re test bonus

