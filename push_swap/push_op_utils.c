/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:09:35 by skarem            #+#    #+#             */
/*   Updated: 2022/05/30 18:16:05 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear_felm(int *array, int used_size)
{
	while (used_size > 0)
	{
		array[used_size] = array[used_size -1];
		used_size--;
	}
}

void	ft_delet_felm(int *array, int used_size)
{
	int	i;
	
	i = 0;
	while (i < used_size)
	{
		array[i] = array[i + 1];
		i++;
	}
}
