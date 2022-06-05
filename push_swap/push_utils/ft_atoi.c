/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:16:21 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 18:36:55 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long long		nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		if(!ft_isdigit(str[i]))
			{
				write(1, "error",6);
				exit(0);
			}
		nb = nb * 10 + (str[i] - '0');
		if((sign * nb <= -2147483648) || (sign * nb >= 2147483647))
		{
				write(1, "error",6);
				exit(0);
		}
		i++;
	}
	return (sign *nb);
}