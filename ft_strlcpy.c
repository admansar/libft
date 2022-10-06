/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:47:32 by admansar          #+#    #+#             */
/*   Updated: 2022/10/05 12:34:13 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *restrict dst, const char * restrict src, size_t dstsize)
{
	int	i;

	i = 0;
	if (dstsize == 0)
		return ((size_t)ft_strlen(src));
	while (src[i] || (size_t)i < dstsize)
	{
		dst[i] = src [i];
		i++;
	}
	dst [dstsize - 1] = '\0';
	return ((size_t)ft_strlen(src));
}
