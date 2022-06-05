/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:32:00 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 16:09:52 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort5(t_stacks *stacks)
{
	int	i;

	i = 0;
	if (!ft_check_sort(&stacks->stack_a))
	{
		if (stacks->stack_a.used_size == 5)
		{
			ft_small_nb(stacks);
			ft_pb(stacks, ON);
			i++;
		}
		if (stacks->stack_a.used_size == 4)
		{
			ft_small_nb(stacks);
			ft_pb(stacks, ON);
			i++;
		}
		ft_sort3(&stacks->stack_a);
		while (i > 0)
		{
			ft_pa(stacks, ON);
			i--;
		}
	}
}