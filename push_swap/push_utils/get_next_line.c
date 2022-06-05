/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarem <skarem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:38:43 by skarem            #+#    #+#             */
/*   Updated: 2022/06/05 21:33:48 by skarem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_n_line(char *remain)
{
	int	i;

	i = 0;
	if (!remain)
		return (-1);
	while (remain[i])
	{
		if (remain[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_rd_line(int fd, char *buff, char *remain)
{
	char	*temp;
	int		i;

	while (find_n_line(remain) == -1)
	{
		i = read (fd, buff, BUFFER_SIZE);
		if (i > 0)
		{
			buff[i] = '\0';
			temp = ft_strjoin_get(remain, buff);
			if (remain)
				free (remain);
			remain = NULL;
			remain = temp;
		}
		else
			break ;
	}
	free (buff);
	buff = NULL;
	if (i == -1)
		return (NULL);
	return (remain);
}

char	*ft_the_line(char *remain)
{
	char	*line;
	int		ind;
	int		i;

	i = 0;
	if (ft_strlen_get(remain) <= 0)
		return (NULL);
	ind = find_n_line(remain);
	if (ind == -1)
	{
		line = ft_strdup(remain);
		return (line);
	}
	line = (char *) malloc((ind + 2) * (sizeof (char)));
	if (!line)
		return (NULL);
	while (remain[i] != '\n')
	{
		line[i] = remain[i];
		i++;
	}
	line[i] = '\n';
	line[i + 1] = '\0';
	return (line);
}

char	*ft_remain(char *remain)
{
	int		len;
	int		ind;
	char	*temp;

	if (!remain)
		return (NULL);
	len = ft_strlen_get(remain);
	ind = find_n_line(remain);
	if (ind != -1)
	{
		temp = ft_substr(remain, (ind + 1), (len - ind));
		free (remain);
		remain = temp;
		return (remain);
	}
	free(remain);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*remain;
	char		*line;
	char		*buff;
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	buff = (char *)malloc (sizeof(char) * (BUFFER_SIZE +1));
	if (!buff)
		return (NULL);
	remain = ft_rd_line(fd, buff, remain);
	line = ft_the_line(remain);
	remain = ft_remain(remain);
	return (line);
}