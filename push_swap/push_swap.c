/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:13:48 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 21:13:48 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_stack_init(char *str, t_stacks *stacks)
{
	int		size;
	char	**nbs;
	
	nbs = ft_split(str, ' ');
	size = ft_check_space(str);
	stacks->stack_a.array = (int *)malloc(sizeof(int) * size);
	stacks->stack_b.array = (int *)malloc(sizeof(int) * size);
	stacks->stack_a.size = size;
	stacks->stack_b.size = size;
	stacks->stack_a.used_size = 0;
	stacks->stack_b.used_size = 0;
	free(str);
	return (nbs);
}

t_stacks	ft_creat_stack(char *str)
{
	t_stacks	stacks;
	char		**nbs;
	long long	nb;
	int			i;
	
	i = 0;
	nbs = ft_stack_init(str, &stacks);
	while (nbs[i])
	{
		nb = ft_atoi(nbs[i]);
		stacks.stack_a.array[i] = nb;
		stacks.stack_a.used_size++;
		free(nbs[i]);
		i++;
	}
	free(nbs);
	return (stacks);
}

int	ft_free(t_stacks *stacks, char *msg, int ret)
{
	if (stacks)
	{
		if (stacks->stack_a.array)
			free(stacks->stack_a.array);
		if (stacks->stack_b.array)
			free(stacks->stack_b.array);
	}
	if (msg != NULL)
		write(2, "error\n", 6);
	return (ret);
}