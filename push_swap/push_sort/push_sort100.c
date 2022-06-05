/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort100.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:10:55 by skarem            #+#    #+#             */
/*   Updated: 2022/06/04 20:52:23 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_ind(t_stacks *stacks, int key_nb)
{
	int	i;

	i = 0;
	while (i < stacks->stack_a.used_size)
	{
		if (stacks->stack_a.array[i] <= key_nb)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_to_top(t_stacks *stacks, int ind)
{
	int	div;
	
	div = stacks->stack_a.used_size / 2;
	while (ind != 0)
	{
		if (ind <= div)
		{
			ft_ra(&stacks->stack_a, ON);
			ind--;
		}
		else
		{
			ft_rra(&stacks->stack_a, ON);
			ind++;
			if (ind == stacks->stack_a.used_size)
				break;
		}
	}
}
void	ft_p_smallnb_b4_knb(t_stacks *stacks, int key_nb)
{
	int	ind;
	
	ind = ft_find_ind(stacks, key_nb);
	while (ind != -1)
	{
		ft_to_top(stacks, ind);
		ft_pb(stacks, ON);
		ind = ft_find_ind(stacks, key_nb);
	}
}

void	ft_sort100(t_stacks *stacks)
{
	unsigned int	i;
	int				key_nb;
	int				*sort_list;
	
	i = 1;
	sort_list = ft_sort(&stacks->stack_a);
	while (i != 4)
	{
		key_nb = ft_key_nb(sort_list, stacks->stack_a.size, i, 4);
		ft_p_smallnb_b4_knb(stacks, key_nb);
		i++;
	}
	free (sort_list);
	ft_sort_rest(stacks);
	while (stacks->stack_b.used_size != 0)
	{
		ft_big_nb(stacks);
		ft_pa(stacks, ON);
	}
}

