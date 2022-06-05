/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:14:07 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 21:11:41 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define BUFFER_SIZE 1

# define ON 1
# define OFF 0

typedef struct array
{
    int size;
    int used_size;
    int *array;
}               t_array;

typedef     struct stack
{
    t_array stack_a;
    t_array stack_b;
}               t_stacks;


                    //push_utils//
                    
long long	ft_atoi(const char *str);
int	        ft_isdigit(int x);
void	    ft_putstr(char *s);
char	    **ft_split(char const *s, char c);
int	        ft_strcmp(char *s1, char *s2);
char	    *ft_strjoin(char const *s1, char const *s2);
size_t	    ft_strlcat(char *dst, const char *src, size_t l);
size_t	    ft_strlcpy(char *dst, const char *src, size_t l);
size_t	    ft_strlen(const char *x);
char	    *get_next_line(int fd);

                    //push_pars//

int         ft_cheking(char **tab); 
int         ft_check_dbl(char *tab);
size_t      ft_check_space(char *x);
int         ft_space_len(char **t);
char        *ft_pars(char **argv, int ac);                  

                    //push_op_utils//
                    
void	    ft_clear_felm(int *array, int used_size);
void	    ft_delet_felm(int *array, int used_size);
                 
                      //push_op//

void	    ft_pa(t_stacks *stacks, int type);
void	    ft_pb(t_stacks *stacks, int type);
void	    ft_ra(t_array *stack_a, int type);
void	    ft_rb(t_array *stack_b, int type);
void	    ft_ra_rb(t_stacks *stacks, int type);
void	    ft_rra(t_array *stack_a, int type);
void	    ft_rrb(t_array *stack_b, int type);
void	    ft_rra_rrb(t_stacks *stacks, int type);
void	    ft_swap(int *a, int *b);
void	    ft_sa_sb(t_array *array, int type, char stack);
void	    ft_sa_andsb(t_stacks *stacks, int type);

                    //push_sort_utils//

int	        ft_small_ind(t_array *stack_a);
void	    ft_small_nb(t_stacks *stacks);
int	        ft_check_sort(t_array *array);
int	        ft_key_nb(int *sort_list, int size, int divid, int chunks);
int	        ft_big_ind(t_array *stack_b);
void	    ft_big_nb(t_stacks *stacks);
void	    ft_small_nb_in_10(t_stacks *stacks);
void	    ft_sort_rest_nb(t_stacks *stacks, int size);
int	        *ft_stor_in_narray(t_array *stack_a);
int	        *ft_sort(t_array *stack_a);
void	    ft_sort_rest(t_stacks *stacks);
void	    ft_sort_100_and_more(t_stacks *stacks);
int	        ft_find_ind(t_stacks *stacks, int key_nb);
void	    ft_to_top(t_stacks *stacks, int ind);
void	    ft_p_smallnb_b4_knb(t_stacks *stacks, int key_nb);

                    //sorting//
                    
void	    ft_sort3(t_array *stack_a);
void	    ft_sort5(t_stacks *stacks);
void        ft_sort10(t_stacks *stacks);
void	    ft_sort100(t_stacks *stack);
void	    ft_sort500(t_stacks *stacks);

                    //push_swap//

char	    **ft_stack_init(char *str, t_stacks *stacks);
t_stacks	ft_creat_stack(char *str);
int	        ft_free(t_stacks *stacks, char *msg, int ret);

                    //get_utils//

size_t	    ft_strlen_get(const char *s);
char	    *ft_strjoin_get(char const *s1, char const *s2);
char	    *ft_strdup(const char *s);
char	    *ft_substr(char const *s, unsigned int start, size_t len);

#endif