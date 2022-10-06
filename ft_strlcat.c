/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:31:06 by admansar          #+#    #+#             */
/*   Updated: 2022/10/05 16:41:59 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(dst);
	while (src[j] || (size_t)j < size - i - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (size >(size_t) i)
		return (i + ft_strlen(src));
	else 
		return (size + ft_strlen (src));
}
