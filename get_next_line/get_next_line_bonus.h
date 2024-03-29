/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 02:44:59 by yregragu          #+#    #+#             */
/*   Updated: 2024/03/24 00:30:48 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
#define GET_NEXT_LINE_BONUS_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <limits.h>

char	*get_next_line_bonus(int fd);
char	*ft_strjoin(char  *s1, char  *s2);
char	*ft_strdup(char *s);
size_t	ft_strlen(const char *c);

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

#endif