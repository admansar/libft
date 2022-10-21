/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:21:51 by admansar          #+#    #+#             */
/*   Updated: 2022/10/18 17:54:08 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	za_counter(const char *str, char c)
{
	int		i;
	size_t	counter;
	int		r;

	i = 0;
	counter = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] != c && r == 1)
		{
			counter++;
			r = 0;
		}
		else if (str[i] == c)
		{
			r = 1;
		}
		i++;
	}
	return (counter);
}

char	**ft_ma_loc(char const *s, char c)
{
	char	**str;

	if (!s)
		return (0);
	str = ft_calloc(za_counter(s, c) + 1, sizeof(char *));
	if (!str)
		return (0);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**ptr;
	int		n;
	int		start;

	i = 0;
	start = -1;
	n = 0;
	if (ft_ma_loc(s, c) == 0)
		return (0);
	ptr = ft_ma_loc(s, c);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			ptr[n] = ft_substr(s, start, i - start);
			start = -1;
			n++;
		}
		i++;
	}
	ptr[n] = 0;
	return (ptr);
}
