# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 07:58:21 by tatahere          #+#    #+#              #
#    Updated: 2024/10/15 08:45:52 by tatahere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
AR	= ar rc
RF	= rm -rf
CC	= cc

CFLAGS = -Wall -Wextra -Werror -I.

NAME	= libft.a
HEADER	= libft.h
SRC		=	ft_isalnum.c		\
			ft_isalpha.c		\
			ft_isascii.c		\
			ft_isdigit.c		\
			ft_isprint.c		\
			ft_toupper.c		\
			ft_tolower.c		\
			ft_memset.c			\
			ft_memcpy.c			\
			ft_bzero.c			\
			ft_memmove.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
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
			ft_calloc.c			\
			ft_putchar_fd.c		\
			ft_putstr_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\

OBJ		= ${SRC:.c=.o}
DEP		= ${SRC:.c=.d}

BSRC	=	ft_lstnew_bonus.c			\
			ft_lstadd_front_bonus.c		\
			ft_lstsize_bonus.c			\
			ft_lstlast_bonus.c			\
			ft_lstadd_back_bonus.c		\
			ft_lstdelone_bonus.c		\
			ft_lstclear_bonus.c			\
			ft_lstiter_bonus.c			\
			ft_lstmap_bonus.c			\

BOBJ	= ${BSRC:.c=.o}
BDEP	= ${BSRC:.c=.d}

MAKEFLAGS = --no-print-directory

VPATH	=	array:is_tipe:lists:memory:string:write

# build the library
all: $(NAME) Makefile

bonus:
	@make OBJ="$(OBJ) $(BOBJ)" $(NAME)


%.o: %.c Makefile
	$(CC) $(CFLAGS) -MMD -c $< -o $@

$(NAME): $(OBJ)  Makefile
	$(AR) $(NAME) $(OBJ)

clean: 
	$(RF) $(OBJ) $(BOBJ) $(DEP) $(BDEP)

fclean: clean
	$(RF) $(NAME)

re: fclean all


.PHONY: all clean fclean re test bonus

-include $(DEP) $(BDEP)
