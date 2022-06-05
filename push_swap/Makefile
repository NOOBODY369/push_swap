
PUSH_SWAP_SRC =	push_utils/ft_atoi.c\
				push_utils/ft_isdigit.c\
				push_utils/ft_split.c\
				push_utils/ft_strjoin.c\
				push_utils/ft_strlen.c\
				push_pars.c\
				push_op_utils.c\
				push_op/ft_push.c\
				push_op/ft_rotate.c\
				push_op/ft_rrr.c\
				push_op/ft_swap_origin.c\
				push_op/ft_swap.c\
				push_sort/push_sort_utils.c\
				push_sort/push_sort_utils2.c\
				push_sort/push_sort_utils3.c\
				push_sort/push_sort3.c\
				push_sort/push_sort5.c\
				push_sort/push_sort10.c\
				push_sort/push_sort100.c\
				push_sort/ft_sort500.c\
				push_swap.c\
				main.c\


CHECKER_SRC = checker.c\
			  push_utils/get_next_line.c\
			  push_utils/ft_split.c\
			  push_utils/ft_strcmp.c\
			  push_utils/ft_atoi.c\
			  push_utils/ft_strjoin.c\
			  push_utils/ft_isdigit.c\
			  push_utils/ft_strlen.c\
			  push_utils/ft_strlcat.c\
			  push_utils/get_utils.c\
			  push_op/ft_push.c\
			  push_op/ft_rotate.c\
			  push_op/ft_rrr.c\
			  push_op/ft_swap.c\
			  push_swap.c\
			  push_pars.c\
			  push_sort/push_sort_utils.c\
			  push_sort/push_sort_utils2.c\
			  push_sort/push_sort_utils3.c\
			  push_sort/push_sort3.c\
			  push_sort/push_sort5.c\
			  push_sort/push_sort10.c\
			  push_sort/push_sort100.c\
			  push_sort/ft_sort500.c\
			  push_op_utils.c\
			  push_op/ft_swap_origin.c\




PUSH_SWAP_OBJ = $(PUSH_SWAP_SRC:%.c=%.o)
CHECKER_OBJ = $(CHECKER_SRC:%.c=%.o)
PUSH_SWAP = push_swap
CHECKER = checker
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(PUSH_SWAP) $(CHECKER)

$(PUSH_SWAP) : $(PUSH_SWAP_OBJ)
	$(CC) $(CFLAGS)  $(PUSH_SWAP_OBJ) -o $(PUSH_SWAP)

$(CHECKER) : $(CHECKER_OBJ)
	$(CC) $(CFLAGS) $(CHECKER_OBJ) -o $(CHECKER)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(PUSH_SWAP_OBJ) $(CHECKER_OBJ)

fclean : clean
	rm -rf $(PUSH_SWAP) $(CHECKER)

re : fclean all
