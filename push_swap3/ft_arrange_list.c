/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:50:09 by aabdou            #+#    #+#             */
/*   Updated: 2022/05/28 21:09:53 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// swap the first nb with the 2nd one
void	ft_swap(int *left, int *right)
{
	int	tmp;

	tmp = *left;
	*left = *right;
	*right = tmp;
}

// store all the numbers from stack a to a new array 
int	*ft_save_list(t_array *stack_a)
{
	int	i;
	int	*stored_list;

	i = 0;
	stored_list = malloc(sizeof(int) * stack_a->size);
	while (i < stack_a->size)
	{
		stored_list[i] = stack_a->array[i];
		i++;
	}
	return (stored_list);
}

// sort the numbers in the new stack (bubble sort)
int	*ft_sort_array(t_array *stack_a)
{
	int	i;
	int	j;
	int	smallest_index;
	int	*sorted_list;

	i = 0;
	sorted_list = ft_save_list(stack_a);
	while (i < stack_a->size - 1)
	{
		smallest_index = i;
		j = i + 1;
		while (j < stack_a->size)
		{
			if (sorted_list[j] < sorted_list[smallest_index])
				smallest_index = j;
			j++;
		}
		ft_swap(&sorted_list[smallest_index], &sorted_list[i]);
		i++;
	}
	return (sorted_list);
}

void	ft_arrange_rest(t_stacks *stacks)
{
	if (stacks->stack_a.used_size == 2)
	{
		if (!ft_check_sorted(&stacks->stack_a))
			ft_sa_or_sb(&stacks->stack_a, ON, 'a');
	}
	if (stacks->stack_a.used_size == 3)
		ft_arrange_three_numbers(&stacks->stack_a);
	if (stacks->stack_a.used_size == 5 || stacks->stack_a.used_size == 4)
		ft_arrange_five_numbers(stacks);
	if (stacks->stack_a.used_size > 5)
		ft_arrange_rest_of_numbers(stacks, stacks->stack_a.used_size);
}

void	ft_arrange_more_then_handred(t_stacks *stacks)
{
	if (stacks->stack_a.used_size == 2)
	{
		if (!ft_check_sorted(&stacks->stack_a))
			ft_sa_or_sb(&stacks->stack_a, ON, 'a');
	}
	else if (stacks->stack_a.used_size == 3)
		ft_arrange_three_numbers(&stacks->stack_a);
	else if (stacks->stack_a.used_size == 5 || stacks->stack_a.used_size == 4)
		ft_arrange_five_numbers(stacks);
	else if (stacks->stack_a.used_size > 5 && stacks->stack_a.used_size <= 10)
		ft_arrange_rest_of_numbers(stacks, stacks->stack_a.used_size);
	else if (stacks->stack_a.used_size > 10)
		ft_arrange_one_handred(stacks);
}
