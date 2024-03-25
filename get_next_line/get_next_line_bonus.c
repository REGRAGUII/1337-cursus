/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 02:43:00 by yregragu          #+#    #+#             */
/*   Updated: 2024/03/25 17:56:14 by yregragu         ###   ########.fr       */
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

static char	*ft_rest(char *str)
{
	char *tmp;
	int	x;

	if (!str)
		return (NULL);
	x = ft_new_line(str);
	if (x != -1)
	{
		tmp = ft_strdup(str + x + 1);
		free(str);
		str = tmp;
		return (NULL);
	}
	free(str);
	return (NULL);
}

static char	*ft_line(char *str)
{
	char	*line;
	int		x;
	int		check;
	
	x = 0;
	if (ft_strlen(str) <= 0)
		return (NULL);
	check = ft_new_line(str);
	if ( check == -1)
	{
		line = ft_strdup(str);
		return (line);
	}
	line = malloc(sizeof(char) * check + 2);
	if  (!line)
		return (NULL);
	while (str[x]!= '\n')
	{
		line[x] = str[x];
		x++;
	}
	line[x] = '\n';
	line[x+1] = '\0';
	return (line);
}

static char	*ft_read(int fd, char *str, char *buff)
{
	char *temp;
	int	x;

	x = 1;
	while (x > 0 && ft_new_line(str) == -1)
	{
		x = read(fd, buff, BUFFER_SIZE);
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
	if (x == -1)
	{
		free (str);
		return (NULL);
	}
	return (str);
}

char	*get_next_line_bonus(fd)
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

#include	<stdio.h>
int main()
{
	int	fd;
	char *line;

	
	fd = open("text.txt", O_RDONLY);
	line = get_next_line_bonus(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line_bonus(fd);
	}
	close (fd);
	// fd = open("text.txt", O_RDONLY);
	// line = get_next_line_bonus(fd);
	// printf("%s", line);
	// 	free(line);
	// // fd = open("file2.txt", O_RDONLY);
	// line = get_next_line_bonus(fd);
	// printf("%s", line);
	// 	free(line);
}

