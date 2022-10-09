/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:31:06 by admansar          #+#    #+#             */
/*   Updated: 2022/10/09 00:19:41 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	if (!size)
		return (0);
	j = 0;
	i = ft_strlen(dst);
	
	if (size < i)
		return (size + ft_strlen(src));
	while (src[j] && (size_t)j < size - i - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	


	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

