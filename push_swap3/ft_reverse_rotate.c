/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:17:48 by aabdou            #+#    #+#             */
/*   Updated: 2022/05/28 21:10:27 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rra(t_array *stack_a, int type)
{
	int	last_elm;

	if (type)
		write(1, "rra\n", 4);
	last_elm = stack_a->array[stack_a->used_size - 1];
	ft_clear_first_elm(stack_a->array, stack_a->used_size);
	stack_a->array[0] = last_elm;
}

void	ft_rrb(t_array *stack_b, int type)
{
	int	last_elm;

	if (type)
		write(1, "rrb\n", 4);
	last_elm = stack_b->array[stack_b->used_size - 1];
	ft_clear_first_elm(stack_b->array, stack_b->used_size);
	stack_b->array[0] = last_elm;
}

void	ft_rra_and_rrb(t_stacks *stacks, int type)
{
	if (type)
		write(1, "rrr\n", 4);
	ft_rra(&stacks->stack_a, OFF);
	ft_rrb(&stacks->stack_b, OFF);
}
