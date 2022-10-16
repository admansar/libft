/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:17:24 by admansar          #+#    #+#             */
/*   Updated: 2022/10/13 21:26:38 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	n;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = 0;
	n = 0;
	ptr = malloc(sizeof(char) *(s1len +s2len) +1);
	if (!ptr)
		return (NULL);
	while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
	while (s2[n])
	{
		ptr[i + n] = s2[n];
		n++;
	}
	ptr [i + n] = '\0';
	return (ptr);
}
