/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:20:05 by skarem            #+#    #+#             */
/*   Updated: 2022/06/04 20:33:44 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_countstring(char const *s1, char x)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == x)
			i = 0;
		else if (i == 0)
		{
			i = 1;
			c++;
		}
		s1++;
	}
	return (c);
}

static int	ft_countchar(char const *s2, char c, int i)
{
	int	len;

	len = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_freeing(char **dst, int x)
{
	while (x > 0)
	{
		x--;
		free((void *)dst[x]);
	}
	free(dst);
	return (NULL);
}

static char	**ft_filling(char const *s, char **dst, char c, int l)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	while (s[i] != '\0' && x < l)
	{
		y = 0;
		while (s[i] == c)
			i++;
		dst[x] = (char *)malloc(sizeof(char) * ft_countchar(s, c, i) + 1);
		if (dst[x] == NULL)
			return (ft_freeing(dst, x));
		while (s[i] != '\0' && s[i] != c)
			dst[x][y++] = s[i++];
		dst[x][y] = '\0';
		x++;
	}
	dst[x] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		l;

	if (s == NULL)
		return (NULL);
	l = ft_countstring(s, c);
	dst = (char **)malloc(sizeof(char *) * (l + 1));
	if (dst == NULL)
		return (NULL);
	return (ft_filling(s, dst, c, l));
}