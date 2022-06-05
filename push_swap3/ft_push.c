/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:14:07 by aabdou            #+#    #+#             */
/*   Updated: 2022/05/28 21:10:24 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// clears space on top of the stack
void	ft_clear_first_elm(int *array, int used_size )
{
	while (used_size > 0)
	{
		array[used_size] = array[used_size - 1];
		used_size--;
	}
}

//delete the first number in the stack
void	ft_remove_first_elm(int *array, int used_size)
{
	int	i;

	i = 0;
	while (i < used_size)
	{
		array[i] = array[i + 1];
		i++;
	}
}

void	ft_pa(t_stacks *stacks, int type)
{
	int	size_of_b;
	int	size_of_a;
	int	i;

	i = 0;
	size_of_b = stacks->stack_b.used_size;
	size_of_a = stacks->stack_a.used_size;
	if (size_of_b == 0)
		return ;
	if (type)
		write(1, "pa\n", 3);
	if (size_of_a == 0)
		stacks->stack_a.array[0] = stacks->stack_b.array[0];
	else
	{
		ft_clear_first_elm(stacks->stack_a.array, size_of_a);
		stacks->stack_a.array[0] = stacks->stack_b.array[0];
	}
	ft_remove_first_elm(stacks->stack_b.array, size_of_b);
	stacks->stack_a.used_size++;
	stacks->stack_b.used_size--;
}

void	ft_pb(t_stacks *stacks, int type)
{
	int	size_of_b;
	int	size_of_a;
	int	i;

	i = 0;
	size_of_b = stacks->stack_b.used_size;
	size_of_a = stacks->stack_a.used_size;
	if (size_of_a == 0)
		return ;
	if (type)
		write(1, "pb\n", 3);
	if (size_of_b == 0)
		stacks->stack_b.array[0] = stacks->stack_a.array[0];
	else
	{
		ft_clear_first_elm(stacks->stack_b.array, size_of_b);
		stacks->stack_b.array[0] = stacks->stack_a.array[0];
	}
	ft_remove_first_elm(stacks->stack_a.array, size_of_a);
	stacks->stack_b.used_size++;
	stacks->stack_a.used_size--;
}
