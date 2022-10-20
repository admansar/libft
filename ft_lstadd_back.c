/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:55:55 by admansar          #+#    #+#             */
/*   Updated: 2022/10/20 00:11:37 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if(*lst == NULL)
		(*lst) = new;
	while((*lst)->next)
		(*lst) = (*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
}
