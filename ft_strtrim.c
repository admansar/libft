/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:39:38 by admansar          #+#    #+#             */
/*   Updated: 2022/10/15 21:47:46 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  char *p;
  size_t i;
  size_t l;
  i = 0;
  if (s1 == 0)
  {
      return NULL;
  }
  while (ft_strchr(set,*s1))
  s1++;
      l = ft_strlen(s1);
  while (ft_strchr(set,s1[l - 1]) && l > 0)
  l--;

  p = (char *)malloc(l + 1);
  if (!p)
  return NULL;
  while(i < l)
  {
      p[i] = s1[i];
      i++;
  }
  p[i] = '\0';
  return (p);
}
int main()

{
    char *s1 = "  \t \t \n   \n\n\n\t";
    char *s2 = "";
  
    printf("%s", ft_strtrim(s1, " \n\t"));

return (0);
}
