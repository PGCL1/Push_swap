# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 19:44:40 by glacroix          #+#    #+#              #
#    Updated: 2023/04/20 20:34:18 by glacroix         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Program name
# **************************************************************************** #
NAME		= push_swap

#Execution
# **************************************************************************** #
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
DEGUB		= -g3 -fsanitize=address
INCLUDES	= -Iinclude
LIBFT		= ./42Libft/libft.a

#SRC & OBJS Details
# **************************************************************************** #
SRCS_PATH	= ./src/
SRCS		= $(addprefix $(SRCS_PATH), $(SRC))
SRC			= main.c
DOT_O		= _objFiles/
OBJS		= $(addprefix $(DOT_O), $(SRCS:%.c=%.o))

#Makefile Cmds
# **************************************************************************** #
all: ${NAME}

clean:
	@make clean -C ./42Libft
	@rm -f ${OBJS}

fclean: clean
	@make fclean -C ./42Libft
	@rm -f $(NAME)
	@rm -rf $(DOT_O)
	@echo "\nDeleting EVERYTHING! ⌐(ಠ۾ಠ)¬\n"

re: fclean all

re_bonus: fclean bonus

.PHONY: all clean fclean re re_bonus bonus

#Object Directory
# **************************************************************************** #
$(DOT_O):
	@mkdir -p $(DOT_O)

$(DOT_O)/%.o: $(SRC_PATH)/%.c | $(DOT_O)
	@$(CC) $(CFLAGS) -c $< -o $@

#SRC Execution
# **************************************************************************** #
${NAME}: ${OBJS}
	@echo "----Compiling lib----"
	@make re -sC ./42Libft
	@$(CC) $(CFLAGS) ${OBJS} $(INCLUDES) $(LIBFT) -o ${NAME}
	@echo "Libft Compiled!\n"
	@echo "Push_swap Compiled!\n"

