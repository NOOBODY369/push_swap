/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 21:14:01 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 21:14:28 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **argv)
{
	t_stacks	stacks;
	char		*str;

	ac--;
	if (ac != 0)
	{
		str = ft_pars(argv, ac);
		stacks = ft_creat_stack(str);
		if (ft_check_sort(&stacks.stack_a))
			return (ft_free(&stacks, NULL, 0));
		else if (stacks.stack_a.size == 2)
			ft_sa_sb(&stacks.stack_a, ON, 'a');
		else if (stacks.stack_a.size == 3)
			ft_sort3(&stacks.stack_a);
		else if (stacks.stack_a.size == 4 || stacks.stack_a.size == 5)
			ft_sort5(&stacks);
		else if (stacks.stack_a.size > 5 && stacks.stack_a.size <= 10)
			ft_sort10(&stacks);
		else if (stacks.stack_a.size > 10 && stacks.stack_a.size <= 100)
			ft_sort100(&stacks);
		else if (stacks.stack_a.size > 100)
			ft_sort500(&stacks);
		return (ft_free(&stacks, NULL, 0));
	}
	return (0);
}