/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange_five_nb.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:50:20 by aabdou            #+#    #+#             */
/*   Updated: 2022/05/28 21:32:09 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_get_smallest_index(t_array *stack_a)
{
	int	i ;
	int	s_index;

	i = 0;
	s_index = i;
	while (i < stack_a->used_size)
	{
		if (stack_a->array[s_index] > stack_a->array[i])
			s_index = i;
		i++;
	}
	return (s_index);
}

// put smallest index on top of stack a 
void	ft_find_smallest_number(t_stacks *stacks)
{
	int	s_index;

	s_index = ft_get_smallest_index(&stacks->stack_a);
	while (s_index != 0)
	{
		if (s_index <= 2)
			ft_ra(&stacks->stack_a, ON);
		else
			ft_rra(&stacks->stack_a, ON);
		s_index = ft_get_smallest_index(&stacks->stack_a);
	}
}

void	ft_arrange_five_numbers(t_stacks *stacks)
{
	int	i;

	i = 0;
	if (!ft_check_sorted(&stacks->stack_a))
	{
		if (stacks->stack_a.used_size == 5)
		{
			ft_find_smallest_number(stacks);
			ft_pb(stacks, ON);
			i++;
		}
		if (stacks->stack_a.used_size == 4)
		{
			ft_find_smallest_number(stacks);
			ft_pb(stacks, ON);
			i++;
		}
		ft_arrange_three_numbers(&stacks->stack_a);
		while ( i > 0)
		{
			ft_pa(stacks, ON);
			i--;
			
		}
	}
}
