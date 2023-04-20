# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 19:44:40 by glacroix          #+#    #+#              #
#    Updated: 2023/04/20 20:52:41 by glacroix         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Colors
# **************************************************************************** #
RESET  		= "\x1B[0m"
RED  		= "\x1B[31m"
GREEN  		= "\x1B[32m"
YELLOW  	= "\x1B[33m"
BLUE 		= "\x1B[34m"
MAGENTA 	= "\x1B[35m"
CAYN  		= "\x1B[36m"
WHITE  		= "\x1B[37m"

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
#DOT_O		= _objFiles/
OBJS		= $(SRCS:%.c=%.o)

#Makefile Cmds
# **************************************************************************** #
all: ${NAME}

clean:
	@make clean -sC ./42Libft
	@rm -f ${OBJS}

fclean: clean
	@make fclean -sC ./42Libft
	@rm -f $(NAME)
#	@rm -rf $(DOT_O)
	@echo $(RED) "\n >>>>>>>> Deleted all *.o and *.a! <<<<<<<< \n" $(RESET)

re: fclean all

re_bonus: fclean bonus

.PHONY: all clean fclean re re_bonus bonus

#Object Directory
# **************************************************************************** #
#$(DOT_O):
#	@mkdir -p $(DOT_O)
#
#$(DOT_O)/%.o: $(SRC_PATH)/%.c | $(DOT_O)
#	@$(CC) $(CFLAGS) -c $< -o $@

#SRC Execution
# **************************************************************************** #
${NAME}: ${OBJS}
	@echo $(YELLOW) "\n .........Compiling lib.........\n" $(RESET)
	@make re -sC ./42Libft
	@$(CC) $(CFLAGS) ${OBJS} $(INCLUDES) $(LIBFT) -o ${NAME}
	@echo $(GREEN) "       Push_swap Compiled!       \n" $(RESET)

