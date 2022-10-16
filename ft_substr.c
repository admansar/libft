/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:11:42 by admansar          #+#    #+#             */
/*   Updated: 2022/10/13 21:38:03 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t i;
	size_t n;

	ptr = malloc (sizeof(char)*len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	n = 0;
	while (s[i])
	{
		if (i >= start && i < len)
		{
			ptr[n] = (char)s[i];
			n++;
		}
		i++;
	}
	ptr [n] = '\0';
	return (ptr);
}
