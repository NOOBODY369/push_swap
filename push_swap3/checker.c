/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:52:39 by hdrabi            #+#    #+#             */
/*   Updated: 2022/05/28 21:09:45 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_read_from_ps(char *line, t_stacks *stacks)
{
	if (!ft_strcmp(line, "sa\n"))
		ft_sa_or_sb(&stacks->stack_a, OFF, 'a');
	else if (!ft_strcmp(line, "sb\n"))
		ft_sa_or_sb(&stacks->stack_b, OFF, 'b');
	else if (!ft_strcmp(line, "ss\n"))
		ft_sa_and_sb(stacks, OFF);
	else if (!ft_strcmp(line, "rra\n"))
		ft_rra(&stacks->stack_a, OFF);
	else if (!ft_strcmp(line, "rrb\n"))
		ft_rrb(&stacks->stack_b, OFF);
	else if (!ft_strcmp(line, "rrr\n"))
		ft_rra_and_rrb(stacks, OFF);
	else if (!ft_strcmp(line, "ra\n"))
		ft_ra(&stacks->stack_a, OFF);
	else if (!ft_strcmp(line, "rb\n"))
		ft_rb(&stacks->stack_b, OFF);
	else if (!ft_strcmp(line, "rr\n"))
		ft_ra_and_rb(stacks, OFF);
	else if (!ft_strcmp(line, "pa\n"))
		ft_pa(stacks, OFF);
	else if (!ft_strcmp(line, "pb\n"))
		ft_pb(stacks, OFF);
	else
		exit(ft_err_and_free(stacks, "Error", 0));
}

int	main(int ac, char **av)
{
	char		*line;
	t_stacks	stacks;
	char		*string;

	ac--;
	if (ac == 0)
		return (0);
	string = ft_arg_to_string(av);
	stacks = ft_create_stack(string);
	line = get_next_line(0);
	while (line && line[0] != '\n')
	{	
		ft_read_from_ps(line, &stacks);
		free(line);
		line = get_next_line(0);
	}
	free(line);
	if (ft_check_sorted(&stacks.stack_a) && !stacks.stack_b.used_size)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (ft_err_and_free(&stacks, NULL, 0));
}
