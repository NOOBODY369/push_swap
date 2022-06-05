/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:04:51 by aabdou            #+#    #+#             */
/*   Updated: 2022/05/30 17:07:19 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stacks	stacks;
	char		*str;

	ac--;
	if (ac != 0)
	{
		str = ft_arg_to_string(av);
		stacks = ft_create_stack(str);
		if (ft_check_sorted(&stacks.stack_a))
			return (ft_err_and_free(&stacks, NULL, 0));
		else if (stacks.stack_a.size == 2)
			ft_sa_or_sb(&stacks.stack_a, ON, 'a');
		else if (stacks.stack_a.size == 3)
			ft_arrange_three_numbers(&stacks.stack_a);
		else if (stacks.stack_a.size == 5 || stacks.stack_a.size == 4)
			ft_arrange_five_numbers(&stacks);
		else if (stacks.stack_a.size > 5 && stacks.stack_a.size <= 10)
			ft_arrange_ten_numbers(&stacks);
		else if (stacks.stack_a.size > 10 && stacks.stack_a.size <= 100)
			ft_arrange_one_handred(&stacks);
		else if (stacks.stack_a.size > 100)
			ft_arrange_five_handred(&stacks);
		return (ft_err_and_free(&stacks, NULL, 0));
	}
	return (0);
}
