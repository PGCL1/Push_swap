# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 19:44:40 by glacroix          #+#    #+#              #
#    Updated: 2023/06/19 12:18:51 by glacroix         ###   ########.fr        #
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

#SRC & OBJS Details
# **************************************************************************** #
SRCS		= srcs/main.c \
				srcs/list.c\
				srcs/memory.c\
				srcs/parsing.c\
				srcs/error_check.c\
				srcs/sorting.c\
				srcs/stack_arithmetic.c\
				srcs/sort_per_size.c\
				srcs/data2index.c\
				srcs/radix.c\
				srcs/movements/mov_push.c\
				srcs/movements/mov_swap.c\
				srcs/movements/mov_reverse_rotate.c\
				srcs/movements/mov_rotate.c\

OBJS		= $(SRCS:%.c=objs/%.o)

#Execution
# **************************************************************************** #
LIBFT		= libft/libft.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
CFLAGS		+= -I include
CFLAGS		+= -I libft -g3
#DEGUB		= -g3 -fsanitize=address

#SRC Execution
# **************************************************************************** #
${NAME}: objs ${OBJS}
	@echo $(YELLOW) "\n .........Compiling lib.........\n" $(RESET)
	@make -sC libft
	@$(CC) $(CFLAGS) ${OBJS} $(LIBFT) -o ${NAME}
	@echo $(GREEN) "       Push_swap Compiled!       \n" $(RESET)

#Makefile Cmds
# **************************************************************************** #
objs:
	@mkdir -p objs/srcs
	@mkdir -p objs/srcs/movements

objs/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: ${NAME}

clean:
	@make clean -sC libft
	@rm -rf objs

fclean: clean
	@make fclean -sC libft
	@rm -f $(NAME)
	@echo $(RED) "\n >>>>>>>> Deleted all *.o and *.a! <<<<<<<< \n" $(RESET)

re: fclean all


re_bonus: fclean bonus

.PHONY: all clean fclean re re_bonus bonus