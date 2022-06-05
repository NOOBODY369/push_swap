/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 08:27:14 by aabdou            #+#    #+#             */
/*   Updated: 2022/05/28 21:10:55 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>

# define ON 1
# define OFF 0

typedef struct array
{
	int	size;
	int	used_size;
	int	*array;
}				t_array;

typedef struct stack
{
	t_array	stack_a;
	t_array	stack_b;
}				t_stacks;

t_stacks	ft_create_stack(char *str);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t ds);
size_t		ft_strlen(const char *str);
long long	ft_atoi(const char *str);
int			ft_get_biggest_index(t_array *stack_b);
int			ft_count_numbers(char *string);
int			ft_check_sorted(t_array *array);
int			ft_check_duplicates(t_stacks *stacks, int number);
int			ft_check_number(char *number);
int			ft_err_and_free(t_stacks *stacks, char *message, int ret);
int			*ft_save_list(t_array *stack_a);
int			*ft_sort_array(t_array *stack_a);
int			ft_search_index(t_stacks *stacks, int key_number);
int			ft_get_smallest_index(t_array *stack_a);
int			ft_check_arg(char *av);
int			ft_find_key_number(int *sorted_list, int size,
				int divided, int chunks);
int			ft_strcmp(char *s1, char *s2);
int			ft_isdigit(int c);
char		**ft_stacks_init(char *string, t_stacks *stacks);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);
char		*get_next_line(int fd);
char		*ft_arg_to_string(char **av);
void		ft_read_from_ps(char *line, t_stacks *stacks);
void		ft_arrange_rest_of_numbers(t_stacks *stacks, int size);
void		ft_find_biggest_number(t_stacks *stacks);
void		ft_find_smallest_number(t_stacks *stacks);
void		ft_arrange_five_numbers(t_stacks *stacks);
void		ft_move_to_top(t_stacks *stacks, int index);
void		ft_push_index(t_stacks *stacks, int key_number);
void		ft_arrange_one_handred(t_stacks *stacks);
void		ft_arrange_five_handred(t_stacks *stacks);
void		ft_remove_first_elm(int *array, int used_size);
void		ft_clear_first_elm(int *array, int used_size);
void		ft_pa(t_stacks *stacks, int type);
void		ft_pb(t_stacks *stacks, int type);
void		ft_rra(t_array *stack_a, int type);
void		ft_rrb(t_array *stack_b, int type);
void		ft_rra_and_rrb(t_stacks *stacks, int type);
void		ft_sa_or_sb(t_array *array, int type, char stack);
void		ft_sa_and_sb(t_stacks *stacks, int type);
void		ft_ra(t_array *stack_a, int type);
void		ft_rb(t_array *stack_b, int type);
void		ft_ra_and_rb(t_stacks *stacks, int type);
void		ft_swap(int *left, int *right);
void		ft_arrange_rest(t_stacks *stacks);
void		ft_arrange_more_then_handred(t_stacks *stacks);
void		ft_find_smallest_number_ten(t_stacks *stacks);
void		ft_arrange_ten_numbers(t_stacks *stacks);
void		ft_arrange_three_numbers(t_array *stack_a);

#endif
