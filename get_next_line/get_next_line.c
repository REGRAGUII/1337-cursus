/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:16:37 by yregragu          #+#    #+#             */
/*   Updated: 2024/01/16 18:57:41 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_new_line(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static char	*ft_rest(char *str)
{
	char	*tmp;
	int		i;

	if (!str)
		return (NULL);
	i = ft_new_line(str);
	if (i != -)
	{
		tmp = ft_strdup(str + i + 1);
		free (str);
		str = tmp;
		return (str);
	}
	free (str);
	return (NULL);
}

static char	*ft_line(char *str)
{
	char	*line;
	int		i;
	int		check;
	
	i = 0;
	if(ft_strlen(str) <= 0)
		return (NULL);
	check = ft_new_line(str);
	if (check = -1)
	{
		line = ft_strdup(str);
		return (line);
	}
	line = malloc(sizeof(char) *check +2);
	if (!line)
		return (NULL);
	while (str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\n';
	line[i+1] = '\0';
	return (line);
}

static char	*ft_read(int fd, char* str, char *buff)
{
	char	*temp;
	int		i;

	i = 1;
	while (i > 0 && ft_new_line(str) == -1)
	{
		i = read (fd, buff, BUFFER_SIZE);
		if (i > 0)
		{
			buff[i] = '\0';
			temp = ft_strjoin(str, buff);
			free(str); 
			str = temp;
		}
	}
	free (buff);
	buff = NULL;
	if (i == -1)
	{
		free (str);
		return (NULL);
	}
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char	*line;
	char	*buff;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(BUFFER_SIZE + 1)
	if (!buff)
		return (NULL);
	str = ft_read(fd, str, buff);
	line = ft_line(str);
	str = ft_rest(str);
	return (line);
}

int main()
{

}
