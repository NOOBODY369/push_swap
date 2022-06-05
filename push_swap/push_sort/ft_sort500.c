/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort500.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:42:07 by skarem            #+#    #+#             */
/*   Updated: 2022/06/04 20:55:10 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort500(t_stacks *stacks)
{
	int	i;
	int	key_nb;
	int	*sort_list;

	i = 1;
	sort_list = ft_sort(&stacks->stack_a);
	while (i != 8)
	{
		key_nb = ft_key_nb(sort_list, stacks->stack_a.size, i, 8);
		ft_p_smallnb_b4_knb(stacks, key_nb);
		i++;
	}
	free (sort_list);
	ft_sort_100_and_more(stacks);
	while (stacks->stack_b.used_size != 0)
	{
		ft_big_nb(stacks);
		ft_pa(stacks, ON);
	}
}