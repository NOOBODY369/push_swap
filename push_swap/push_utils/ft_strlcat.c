/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:19:41 by skarem            #+#    #+#             */
/*   Updated: 2022/06/04 20:33:51 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	i;
	size_t	x;
	size_t	s;
	size_t	d;

	i = ft_strlen(dst);
	x = 0;
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (l < 1)
		return (s + l);
	while (src[x] && i < l - 1)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	if (l < d)
		return (s + l);
	else
		return (d + s);
}