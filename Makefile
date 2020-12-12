# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/25 13:44:54 by xli               #+#    #+#              #
#    Updated: 2020/12/12 16:35:54 by xli              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_isdigit.c ft_memset.c ft_isprint.c ft_strtrim.c\
ft_strlcat.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memccpy.c ft_strlen.c\
ft_toupper.c ft_calloc.c ft_memchr.c ft_isalnum.c ft_split.c\
ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strrchr.c ft_itoa.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_strmapi.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
ft_lstiter.c ft_lstmap.c
 
OBJS	= ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f
 
CFLAGS	= -Wall -Wextra -Werror
 
.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}
 
${NAME}:${OBJS}
		ar rcs ${NAME} ${OBJS}
 
all:	${NAME}
 
clean:
		${RM} ${OBJS}
 
fclean:	clean
		${RM} ${NAME}
 
re:		fclean all
