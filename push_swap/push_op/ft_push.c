/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:03:18 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 19:07:37 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_stacks *stacks, int type)
{
	int	a_size;
	int	b_size;
	int	i;

	i = 0;
	a_size = stacks->stack_a.used_size;
	b_size = stacks->stack_b.used_size;
	if (b_size == 0)
		return ;
	if (type)
		write(1, "pa\n", 3);
	if (a_size == 0)
		stacks->stack_a.array[0] = stacks->stack_b.array[0];
	else
	{
		ft_clear_felm(stacks->stack_a.array, a_size);
		stacks->stack_a.array[0] = stacks->stack_b.array[0];
	}
	ft_delet_felm(stacks->stack_b.array, b_size);
	stacks->stack_a.used_size++;
	stacks->stack_b.used_size--;
}

void	ft_pb(t_stacks *stacks, int type)
{
	int	b_size;
	int	a_size;
	int	i;

	i = 0;
	b_size = stacks->stack_b.used_size;
	a_size = stacks->stack_a.used_size;
	if (a_size == 0)
		return ;
	if (type)
		write(1, "pb\n", 3);
	if (b_size == 0)
		stacks->stack_b.array[0] = stacks->stack_a.array[0];
	else
	{
		ft_clear_felm(stacks->stack_b.array, b_size);
		stacks->stack_b.array[0] = stacks->stack_a.array[0];
	}
	ft_delet_felm(stacks->stack_a.array, a_size);
	stacks->stack_b.used_size++;
	stacks->stack_a.used_size--;
}