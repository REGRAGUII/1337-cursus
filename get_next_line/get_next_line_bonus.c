/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 02:43:00 by yregragu          #+#    #+#             */
/*   Updated: 2024/03/23 00:40:41 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int	ft_new_line(char *s)
{
	int	x;
	
	x = 0;
	while(s && s[x])
	{
		if (s[x] == '\n')
			  return (x);
		x++;
	}
	return (-1);
}

static char	*ft_line(char *str)
{
	char	*line;
	int		x;
	int		check;
	
	x = 0;
	if ()
}

static char	*ft_read(int fd, char *str, char *buff)
{
	char *temp;
	int	x;

	x = 1;
	while (x > 0 && ft_new_line(str) == -1)
	{
		x = read(fd, buff, BUFFER_SIZE)
		if (x > 0)
		{
			buff[x] = '\0';
			temp = ft_strjoin(str, buff);
			free(str);
			str = temp;
		}
	}
	free (buff);
	buff = NULL;
	if (x = -1)
	{
		free (str);
		return (NULL);
	}
	return (str);
	
}

get_next_line_bonus(fd)
{
	static char	*str[OPEN_MAX];
	char	*line;
	char	*buff;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = (char *)malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	str[fd] = ft_read(fd, str[fd], buff);
	line = ft_line(str[fd]);
	str[fd] = ft_rest(str[fd]);
	return (line);
	
}