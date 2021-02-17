# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edhommee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 09:49:17 by edhommee          #+#    #+#              #
#*   Updated: 2017/09/07 19:54:29 by edhommee         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

SRC_DIR		= ./srcs/

include settings.mk

INC			= ./includes/
INCLUDES	= -I $(INC)

.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@printf "\033[0;32m%-50s\033[0m\n" "Compilation done"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR) 2> /dev/null
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(OBJ_DIRS)) 2> /dev/null

$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
