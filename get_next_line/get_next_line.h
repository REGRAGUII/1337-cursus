/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:21:09 by yregragu          #+#    #+#             */
/*   Updated: 2024/03/31 18:23:12 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char  *s1, char  *s2);
char	*ft_strdup(char *s);
size_t	ft_strlen(const char *c);

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif


#endif