
PUSH_SWAP_SRC = ft_check_errors.c \
				ft_find_biggest_nb.c \
				ft_arrange_five_nb.c \
				ft_arrange_one_handred_nb.c \
				ft_push.c \
				ft_reverse_rotate.c \
				ft_rotate.c \
				ft_swap.c \
				ft_arrange_list.c \
				ft_arrange_ten_nb.c \
				ft_arrange_three_nb.c \
				ft_push_swap.c \
				main.c \
				ft_split.c \
				ft_ps_util2.c \
				ft_ps_util.c \


CHECKER_SRC = 	checker.c \
				get_next_line.c \
				ft_split.c \
				ft_check_errors.c \
				ft_push.c \
				ft_reverse_rotate.c \
				ft_rotate.c \
				ft_swap.c \
				ft_push_swap.c \
				ft_ps_util2.c \
				ft_ps_util.c \

				


PUSH_SWAP_OBJ = $(PUSH_SWAP_SRC:%.c=%.o)
CHECKER_OBJ = $(CHECKER_SRC:%.c=%.o)
PUSH_SWAP = push_swap
CHECKER = checker
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(PUSH_SWAP) $(CHECKER)

$(PUSH_SWAP) : $(PUSH_SWAP_OBJ)
	$(CC) $(CFLAGS) $(PUSH_SWAP_OBJ) -o $(PUSH_SWAP)

$(CHECKER) : $(CHECKER_OBJ)
	$(CC) $(CFLAGS) $(CHECKER_OBJ) -o $(CHECKER)

%.o:%.c
	$(CC) $(CFLAGS) -c $^

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(CHECKER) $(PUSH_SWAP)

re : fclean all
