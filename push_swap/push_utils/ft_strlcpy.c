/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:46:45 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 21:03:27 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcpy(char *lt, const char *src, size_t l)
{
	size_t	i;

	i = 0;
	if (l > 0)
	{	
		while (src[i] && i < (l - 1))
		{	
			lt[i] = src[i];
			i++;
		}	
		lt[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}