/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:55:41 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 21:37:09 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_array *stack_a, int type)
{
	int	la_lm;
	
	if(type)
		write(1, "rra\n", 4);
		
	la_lm = stack_a->array[stack_a->used_size - 1];
	ft_clear_felm(stack_a->array, stack_a->used_size);
	stack_a->array[0] = la_lm;
}

void	ft_rrb(t_array *stack_b, int type)
{
	int	la_lm;
	
	if(type)
		write(1, "rrb\n", 4);
	la_lm = stack_b->array[stack_b->used_size - 1];
	ft_clear_felm(stack_b->array, stack_b->used_size);
	stack_b->array[0] = la_lm;
}

void	ft_rra_rrb(t_stacks *stacks, int type)
{
	if(type)
		write(1, "rrr\n", 4);
	ft_rra(&stacks->stack_a, OFF);
	ft_rrb(&stacks->stack_b, OFF);
}