/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:41:47 by skarem            #+#    #+#             */
/*   Updated: 2022/06/04 20:50:42 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_rest_nb(t_stacks *stacks, int size)
{
	if (!ft_check_sort(&stacks->stack_a))
	{
		while (stacks->stack_a.used_size >= 5)
		{
			ft_small_nb_in_10(stacks);
			ft_pb(stacks, ON);
		}
		ft_sort5(stacks);
		while (stacks->stack_a.used_size != size)
			ft_pa(stacks, ON);
	}
}

int	*ft_stor_in_narray(t_array *stack_a)
{
	int	i;
	int	*sort_list;

	i = 0;
	sort_list = malloc(sizeof(int) * stack_a->size);
	while (i < stack_a->size)
	{
		sort_list[i] = stack_a->array[i];
		i++;
	}
	return(sort_list);
}
int	*ft_sort(t_array *stack_a)
{
	int	i;
	int	j;
	int	small_ind;
	int	*sort_list;
	
	i = 0;
	sort_list = ft_stor_in_narray(stack_a);
	while (i < stack_a->size - 1)
	{
		small_ind = i;
		j = i + 1;
		while (j < stack_a->size)
		{
			if (sort_list[j] < sort_list[small_ind])
				small_ind = j;
			j++;
		}
		ft_swap(&sort_list[small_ind], &sort_list[i]);
		i++;
	}
	return (sort_list);
}

void	ft_sort_rest(t_stacks *stacks)
{
	if (stacks->stack_a.used_size == 2)
	{
		if (!ft_check_sort(&stacks->stack_a))
			ft_sa_sb(&stacks->stack_a, ON, 'a');
	}
	if (stacks->stack_a.used_size == 3)
		ft_sort3(&stacks->stack_a);
	if (stacks->stack_a.used_size == 5 || stacks->stack_a.used_size == 4)
		ft_sort5(stacks);
	if (stacks->stack_a.used_size > 5)
		ft_sort_rest_nb(stacks, stacks->stack_a.used_size);
}

void	ft_sort_100_and_more(t_stacks *stacks)
{
	if (stacks->stack_a.used_size == 2)
	{
		if (!ft_check_sort(&stacks->stack_a))
			ft_sa_sb(&stacks->stack_a, ON, 'a');
	}
	else if (stacks->stack_a.used_size == 3)
		ft_sort3(&stacks->stack_a);
	else if (stacks->stack_a.used_size == 5 || stacks->stack_a.used_size == 4)
		ft_sort5(stacks);
	else if (stacks->stack_a.used_size > 5 && stacks->stack_a.used_size <= 10)
		ft_sort_rest_nb(stacks, stacks->stack_a.used_size);
	else if (stacks->stack_a.used_size > 10)
		ft_sort100(stacks);
}
