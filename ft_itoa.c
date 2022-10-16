/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:18:24 by admansar          #+#    #+#             */
/*   Updated: 2022/10/16 15:34:35 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *flip(char *ptr)
{
  char temp;
  int i;
  int l;
  i = 0;
  l = ft_strlen (ptr) - 1;
  while (i <= l/2)
  {
    temp = ptr[l - i];
    ptr [l - i] = ptr [i];
    ptr[i] = temp;
    i++;
  }
  return (ptr);
}
char *ft_itoa(int n)
{
	int a;
	int alpha;
	int i;
	char *p;
	int sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	if (n == 0)
	{
		p = (char *)malloc (2);
		p[0] = '0';
		p[1] = 0;
		return (p);
	}
	if (sign == -1)
		n = sign * n;
	i = 1;
	a = n;
	while (a >= 9)
	{
		a = a / 10;
		i++;
	}
	if (sign == 1)
	p = malloc (sizeof(char) * i + 1);
	if (sign == -1)
	p = malloc (sizeof(char) * i + 2);
	if (!p)
		return NULL;
	alpha = 0;
	a = n;
	while (alpha < i)
	{
		p [alpha] = a % 10 + '0';
		a = a / 10;
		alpha++;
	}
	if (sign == -1)
	{
		p[alpha] = '-';
		p[alpha + 1] = '\0';
	}
	if (sign == 1)
	p[alpha] = '\0';
	flip(p);
	return (p);
}
