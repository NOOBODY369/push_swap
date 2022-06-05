/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:29:13 by skarem            #+#    #+#             */
/*   Updated: 2022/06/04 20:51:46 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort3(t_array *stack_a)
{
	if (stack_a->array[0] > stack_a->array[1])
		ft_sa_sb(stack_a, ON, 'a');
	if (!(ft_check_sort(stack_a)))
		ft_rra(stack_a, ON);
	if (stack_a->array[0] > stack_a->array[1])
		ft_sa_sb(stack_a, ON, 'a');
}