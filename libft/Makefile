# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 20:01:04 by Said Boutayeb     #+#    #+#              #
#    Updated: 2025/09/18 19:35:25 by said-boutayeb    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Variables ---
NAME = libft.a
SRC_FILE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_memmove.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strstr.c ft_strnstr.c ft_strncmp.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_atoi.c
OBJ_FILE = $(SRC_FILE:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

# --- Rules ---

# Default rule to build the library
all: $(NAME)

# Rule to archive the .o files into the library
$(NAME): $(OBJ_FILE)
	ar rcs $(NAME) $(OBJ_FILE)

# Smart rule to compile any .c file into a .o file
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Rule to delete temporary files
clean:
	$(RM) $(OBJ_FILE)

# Rule to delete everything
fclean: clean
	$(RM) $(NAME)

# Rule to rebuild from scratch
re: fclean all
