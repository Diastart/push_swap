# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dias <dias@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 09:47:41 by Dias              #+#    #+#              #
#    Updated: 2025/02/14 09:57:37 by dias             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CHECKER		= checker

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

SRC			= push_swap.c \
			ft_add_node_to_stack.c \
			ft_assign_index.c \
			ft_atoi_with_error.c \
			ft_bits.c \
			ft_check_duplicates.c \
			ft_clean_stack.c \
			ft_create_node.c \
			ft_init_stack.c \
			ft_is_sorted.c \
			ft_parse.c \
			ft_print_stack.c \
			ft_push_operations.c \
			ft_reverse_rotate_operations.c \
			ft_rotate_operations.c \
			ft_rotate.c \
			ft_sort_large.c \
			ft_sort_small.c \
			ft_sort.c \
			ft_swap_operations.c

CHECKER_SRC	= checker.c \
			ft_add_node_to_stack.c \
			ft_assign_index.c \
			ft_atoi_with_error.c \
			ft_bits.c \
			ft_check_duplicates.c \
			ft_clean_stack.c \
			ft_create_node.c \
			ft_init_stack.c \
			ft_is_sorted.c \
			ft_parse.c \
			ft_print_stack.c \
			ft_push_operations.c \
			ft_reverse_rotate_operations.c \
			ft_rotate_operations.c \
			ft_rotate.c \
			ft_sort_large.c \
			ft_sort_small.c \
			ft_sort.c \
			ft_swap_operations.c \
			ft_strncmp.c \
			get_next_line.c \
			get_next_line_utils.c

OBJ			= $(SRC:.c=.o)
CHECKER_OBJ	= $(CHECKER_SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus:		$(CHECKER)

$(CHECKER):	$(CHECKER_OBJ)
			$(CC) $(CFLAGS) $(CHECKER_OBJ) -o $(CHECKER)

clean:
			rm -f $(OBJ) $(CHECKER_OBJ)

fclean:		clean
			rm -f $(NAME) $(CHECKER)

re:			fclean all

.PHONY:		all clean fclean re bonus
