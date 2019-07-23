# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 12:28:43 by zamaseko          #+#    #+#              #
#    Updated: 2019/06/26 15:20:37 by zamaseko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
FLAGS = -Wall -Werror -Wextra -c
SRCS = ft_putchar.c ft_putstr.c ft_tolower.c ft_toupper.c ft_strlen.c \
	  ft_isalpha.c ft_strcpy.c ft_strdup.c ft_strncat.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl.c ft_putnbr.c ft_atoi.c ft_isdigit.c \
	  ft_isascii.c ft_isalnum.c ft_strcmp.c ft_isprint.c ft_strncmp.c \
	  ft_strcat.c ft_putendl_fd.c ft_putnbr_fd.c ft_strncpy.c ft_strstr.c \
	  ft_strmap.c ft_memcpy.c ft_memset.c ft_bzero.c ft_memalloc.c \
	  ft_strchr.c ft_strnstr.c ft_striter.c ft_strmapi.c ft_memdel.c \
	  ft_strdel.c ft_memccpy.c ft_strclr.c ft_striteri.c ft_strrchr.c \
	  ft_strequ.c ft_strnequ.c ft_memcmp.c ft_memchr.c ft_strnew.c \
	  ft_strjoin.c ft_memmove.c ft_strsub.c ft_strlcat.c ft_strtrim.c \
	  ft_strsplit.c ft_itoa.c ft_gap.c ft_spaces.c ft_wc.c 
OBJS = ft_putchar.o ft_putstr.o ft_tolower.o ft_toupper.o ft_strlen.o \
	  ft_isalpha.o ft_strcpy.o ft_strdup.o ft_strncat.o ft_putchar_fd.o \
	  ft_putstr_fd.o ft_putendl.o ft_putnbr.o ft_atoi.o ft_isdigit.o \
	  ft_isascii.o ft_isalnum.o ft_strcmp.o ft_isprint.o ft_strncmp.o \
	  ft_strcat.o ft_putendl_fd.o ft_putnbr_fd.o ft_strncpy.o ft_strstr.o \
	  ft_strmap.o ft_memcpy.o ft_memset.o ft_bzero.o ft_memalloc.o \
	  ft_strchr.o ft_strnstr.o ft_striter.o ft_strmapi.o ft_memdel.o \
	  ft_strdel.o ft_memccpy.o ft_strclr.o ft_striteri.o ft_strrchr.o \
	  ft_strequ.o ft_strnequ.o ft_memcmp.o ft_memchr.o ft_strnew.o \
	  ft_strjoin.o ft_memmove.o ft_strsub.o ft_strlcat.o ft_strtrim.o \
	  ft_strsplit.o ft_itoa.o ft_gap.o ft_spaces.o ft_wc.o

all : $(NAME)
	
$(NAME):
	gcc $(FLAGS) $(SRCS) 
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -rf *.o
fclean: clean 
	rm -rf  $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
