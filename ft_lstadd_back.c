/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:41:09 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/30 10:41:13 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;
	
	if (!lst || !new)
		return;
	if (*lst)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*lst = new;
}
