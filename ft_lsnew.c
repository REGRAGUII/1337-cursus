/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryuuk_reg <ryuuk_reg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:48:24 by ryuuk_reg         #+#    #+#             */
/*   Updated: 2023/11/26 21:15:07 by ryuuk_reg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	
	new = malloc(sizeof(t_list))
	if (!new)
		return (NULL);
	new->next = NULL;
	new->content = content;
	return (new);
}