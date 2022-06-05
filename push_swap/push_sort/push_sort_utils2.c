/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:18:10 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 17:44:13 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_key_nb(int *sort_list, int size, int divid, int chunks)
{
	int	key_nb;

	key_nb = sort_list[(size * divid) / chunks];
	return (key_nb);
}

int	ft_big_ind(t_array *stack_b)
{
	int	i;
	int	s_ind;

	i = 0;
	s_ind = i;
	while (i < stack_b->used_size)
	{
		if (stack_b->array[s_ind] < stack_b->array[i])
			s_ind = i;
		i++;
	}
	return (s_ind);
}

void	ft_big_nb(t_stacks *stacks)
{
	int	s_ind;
	
	s_ind = ft_big_ind(&stacks->stack_b);
	while (s_ind != 0)
	{
		if (s_ind <= (stacks->stack_b.used_size / 2))
			ft_rb(&stacks->stack_b, ON);
		else
			ft_rrb(&stacks->stack_b, ON);
		s_ind = ft_big_ind(&stacks->stack_b);
	}
}

void	ft_small_nb_in_10(t_stacks *stacks)
{
	int	s_ind;
	
	s_ind = ft_small_ind(&stacks->stack_a);
	while (s_ind !=0)
	{
		if (s_ind <= 5)
			ft_ra(&stacks->stack_a, ON);
		else
			ft_rra(&stacks->stack_a, ON);
		s_ind = ft_small_ind(&stacks->stack_a);
	}
}