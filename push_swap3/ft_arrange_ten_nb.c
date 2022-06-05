/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange_ten_nb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:57:57 by aabdou            #+#    #+#             */
/*   Updated: 2022/05/30 22:42:17 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_find_smallest_number_ten(t_stacks *stacks)
{
	int	s_index;

	s_index = ft_get_smallest_index(&stacks->stack_a);
	while (s_index != 0)
	{
		if (s_index <= 5)
			ft_ra(&stacks->stack_a, ON);
		else
			ft_rra(&stacks->stack_a, ON);
		s_index = ft_get_smallest_index(&stacks->stack_a);
	}
}

void	ft_arrange_ten_numbers(t_stacks *stacks)
{
	if (!ft_check_sorted(&stacks->stack_a))
	{
		while (stacks->stack_a.used_size != 5)
		{
			ft_find_smallest_number_ten(stacks);
			ft_pb(stacks, ON);
		}
		ft_arrange_five_numbers(stacks);
		while (stacks->stack_a.used_size != stacks->stack_a.size)
			ft_pa(stacks, ON);
	}
}
