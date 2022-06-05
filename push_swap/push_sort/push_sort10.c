/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort10.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:31:20 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 21:42:59 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_sort10(t_stacks *stacks)
{
    if (!ft_check_sort(&stacks->stack_a))
    {
        while (stacks->stack_a.used_size != 5)
        {
            ft_small_nb_in_10(stacks);
            ft_pb(stacks, ON);
        }
        ft_sort5(stacks);
        while (stacks->stack_a.used_size != stacks->stack_a.used_size)
            ft_pa(stacks, ON);
    }
}