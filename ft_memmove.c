/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:55:59 by admansar          #+#    #+#             */
/*   Updated: 2022/10/05 10:42:33 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*c_dst;
	char	*c_src;
	char	*saver;
	int		i;

	c_dst = (char *)dst;
	c_src = (char *)src;
	saver = c_src;
	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	if (c_dst >= c_src)
	{
		while (n + 1)
		{
			c_dst[n] = saver[n];
			n--;
		}
	}
	else
	{
		while ((size_t)i < n)
		{
			c_dst[i] = saver[i];
			i++;
		}
	}
	return (c_dst);
}
