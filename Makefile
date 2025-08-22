# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Said Boutayeb <sboutaye@student.1337.ma>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 20:01:04 by Said Boutayeb     #+#    #+#              #
#    Updated: 2025/08/20 20:38:22 by Said Boutayeb    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Variables ---
NAME = libft.a
SRC_FILE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c ft_atoi.c
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
