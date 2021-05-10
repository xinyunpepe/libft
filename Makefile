# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/25 13:44:54 by xli               #+#    #+#              #
#    Updated: 2021/04/15 10:44:53 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS_SRCS =	ft_lstnew.c \
	  			ft_lstadd_front.c \
	  			ft_lstsize.c \
	  			ft_lstlast.c \
	  			ft_lstadd_back.c \
	  			ft_lstdelone.c \
	  			ft_lstclear.c \
	  			ft_lstiter.c \
	  			ft_lstmap.c \
				ft_lstfind.c \
				ft_memory.c \
				ft_memory_utils.c \
				ft_minmax.c \
				get_next_line.c \
				get_next_line_utils.c

HEADER = libft.h

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

$(NAME):$(OBJS) $(BONUS_OBJS)
		@ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

all:	$(NAME)

bonus:	$(OBJS) $(BONUS_OBJS)
		@ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
		@rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
		@rm -rf $(NAME)

re:		clean all

.PHONY:	all clean fcl re
