/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:45:10 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 18:58:42 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa_sb(t_array *array, int type, char stack)
{
	int	tmp;
	
	if(type && stack == 'a')
		write(1, "sa\n", 3);
	else if (type && stack == 'b')
		write(1, "sb\n", 3);	
	if (array->used_size > 1)
	{
		tmp = array->array[0];
		array->array[0] = array->array[1];
		array->array[1] = tmp;
	}
}

void	ft_sa_andsb(t_stacks *stacks, int type)
{
	if (type)
		write(1, "ss\n", 3);
	ft_sa_sb(&stacks->stack_a, OFF, 'a');
	ft_sa_sb(&stacks->stack_b, OFF, 'b');
}