/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:22:10 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 21:27:57 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_read_ps(char *line, t_stacks *stacks)
{
	if (!ft_strcmp(line, "sa\n"))
		ft_sa_sb(&stacks->stack_a, OFF, 'a');
	else if (!ft_strcmp(line, "sb\n"))
		ft_sa_sb(&stacks->stack_b, OFF, 'b');
	else if (!ft_strcmp(line, "ss\n"))
		ft_sa_andsb(stacks, OFF);
	else if (!ft_strcmp(line, "rra\n"))
		ft_rra(&stacks->stack_a, OFF);
	else if (!ft_strcmp(line, "rrb\n"))
		ft_rrb(&stacks->stack_b, OFF);
	else if (!ft_strcmp(line, "rrr\n"))
		ft_rra_rrb(stacks, OFF);
	else if (!ft_strcmp(line, "ra\n"))
		ft_ra(&stacks->stack_a, OFF);
	else if (!ft_strcmp(line, "rb\n"))
		ft_rb(&stacks->stack_b, OFF);
	else if (!ft_strcmp(line, "rr\n"))
		ft_ra_rb(stacks, OFF);
	else if (!ft_strcmp(line, "pa\n"))
		ft_pa(stacks, OFF);
	else if (!ft_strcmp(line, "pb\n"))
		ft_pb(stacks, OFF);
	else
		exit(ft_free(stacks, "Error", 0));
}

int	main(int ac, char **av)
{
	char		*line;
	t_stacks	stacks;
	char		*string;
	ac--;
	if (ac == 0)
		return (0);
	string = ft_pars(av, ac);
	stacks = ft_creat_stack(string);
	line = get_next_line(0);
    //printf("%s\n", line);
	while (line && line[0] != '\n')
	{	
		ft_read_ps(line, &stacks);
		free(line);
		line = get_next_line(0);
	}
	free(line);
	if (ft_check_sort(&stacks.stack_a) && !stacks.stack_b.used_size)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (ft_free(&stacks, NULL, 0));
}