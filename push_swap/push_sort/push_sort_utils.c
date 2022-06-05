/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:03:42 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 17:49:19 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_small_ind(t_array *stack_a)
{
	int	i;
	int	s_ind;
	
	i = 0;
	s_ind = i;
	while (i < stack_a->used_size)
	{
		if (stack_a->array[s_ind] > stack_a->array[i])
			s_ind = i;
		i++;
	}
	return (s_ind);
}

void	ft_small_nb(t_stacks *stacks)
{
	int	s_ind;
	
	s_ind = ft_small_ind(&stacks->stack_a);
	while (s_ind != 0)
	{
		if (s_ind <= 2)
			ft_ra(&stacks->stack_a, ON);
		else
			ft_rra(&stacks->stack_a, ON);
		s_ind = ft_small_ind(&stacks->stack_a);
	}
}

int	ft_check_sort(t_array *array)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = array->array;
	while (i < array->used_size - 1)
	{
		if (tmp[i] > tmp[i +1])
			return (0);
		i++;
	}
	return (1);
}