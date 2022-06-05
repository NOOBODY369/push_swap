/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:17:05 by aabdou            #+#    #+#             */
/*   Updated: 2022/05/28 21:10:31 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_array *stack_a, int type)
{
	int	first_elm;

	if (type)
		write(1, "ra\n", 3);
	first_elm = stack_a->array[0];
	ft_remove_first_elm(stack_a->array, stack_a->used_size);
	stack_a->array[stack_a->used_size - 1] = first_elm;
}

void	ft_rb(t_array *stack_b, int type)
{
	int	first_elm;

	if (type)
		write(1, "rb\n", 3);
	first_elm = stack_b->array[0];
	ft_remove_first_elm(stack_b->array, stack_b->used_size);
	stack_b->array[stack_b->used_size - 1] = first_elm;
}

void	ft_ra_and_rb(t_stacks *stacks, int type)
{
	if (type)
		write(1, "rr\n", 3);
	ft_ra(&stacks->stack_a, OFF);
	ft_rb(&stacks->stack_b, OFF);
}
