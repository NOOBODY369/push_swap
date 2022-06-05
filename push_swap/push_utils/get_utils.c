/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 21:07:38 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 21:32:59 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen_get(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin_get(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	len1;
	unsigned int	len2;

	len1 = ft_strlen_get(s1);
	len2 = ft_strlen_get(s2);
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		str[i + len1] = s2[i];
		i++;
	}
	str[i + len1] = '\0';
	return (str);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen_get(s);
	if (!s)
		return (NULL);
	str = malloc((n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < (int)n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	if (ft_strlen_get(s + start) < len)
		str = malloc((ft_strlen_get(s + start) + 1) * sizeof(char));
	else
		str = malloc(((int)len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] && i < (int)len && ft_strlen_get(s) >= start)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}