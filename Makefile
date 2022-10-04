# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccrecent <ccrecent@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 17:34:00 by ccrecent          #+#    #+#              #
#    Updated: 2022/10/04 15:08:39 by ccrecent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_strlen.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
 		ft_bzero.c	\
		ft_memcpy.c	\
		ft_memmove.c	\
		ft_memset.c	\
		ft_tolower.c	\
		ft_toupper.c	\
		ft_strchr.c	\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_strnstr.c	\
		ft_atoi.c	\
		ft_calloc.c	\
		ft_strdup.c	\
		
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGC = -Wall -Wextra -Werror
NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all