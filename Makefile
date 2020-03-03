# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 14:02:48 by esuguimo          #+#    #+#              #
#    Updated: 2020/02/28 04:44:14 by esuguimo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR		= ar rc

RANLIB	= ranlib

HEADERS = libft.h

SRC		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
		  ft_isalnum.c ft_isascii.c ft_isprint.c ft_isspace.c ft_toupper.c \
		  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c \
		  ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		  ft_itoa.c ft_nbrlen.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		  ft_strtrim.c ft_substr.c ft_strjoin.c ft_strmapi.c ft_wordcounter.c \
		  ft_wordlen.c ft_split.c \

SRCBON 	= ft_lstnew.c ft_lstadd_front.c \
		  ft_lstlast.c ft_lstadd_back.c ft_lstsize.c ft_lstdelone.c \
		  ft_lstclear.c ft_lstiter.c ft_lstmap.c \

.c.o:
			$(CC) $(CFLAGS) $(HEADERS) -c $< -o $(<:.c=.o)

OBJ		= $(SRC:.c=.o)

OBJ_B	= $(SRCBON:.c=.o)

$(NAME):		
				@$(CC) $(CFLAGS) -c $(SRC)
				@$(AR) $(NAME) $(OBJ)
				@$(RANLIB) $(NAME)
				@echo "[INFO] Libray [$(NAME)] created!"

all:		$(NAME)

bonus:
				@$(CC) $(CFLAGS) -c $(SRCBON)
				@$(AR) $(NAME) $(OBJ_B)
				@$(RANLIB) $(NAME)
				@echo "[INFO] bonus created!"

clean:
			@$(RM) $(OBJ) $(OBJ_B)
			@echo "[INFO] Objects removed!"

fclean:		clean
			@$(RM) $(NAME)
			@echo "[INFO] Library [$(NAME)] removed!"

re:			fclean all

.PHONY: all bonus clean fclean re

