/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:33:01 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 19:07:18 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_array *stack_a, int type)
{
	int	f_elm;

	if (type)
		write(1, "ra\n", 3);
	f_elm = stack_a->array[0];
	ft_delet_felm(stack_a->array, stack_a->used_size);
	stack_a->array[stack_a->used_size - 1] = f_elm;
}

void	ft_rb(t_array *stack_b, int type)
{
	int	f_elm;

	if (type)
		write(1, "rb\n", 3);
	f_elm = stack_b->array[0];
	ft_delet_felm(stack_b->array, stack_b->used_size);
	stack_b->array[stack_b->used_size - 1] = f_elm;
}

void	ft_ra_rb(t_stacks *stacks, int type)
{
	if (type)
		write(1, "rr\n", 3);
	ft_ra(&stacks->stack_a, OFF);
	ft_rb(&stacks->stack_b, OFF);
}