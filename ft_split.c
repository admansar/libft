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


char *inside(char *s1, int l7arf, int size)
{
    char *ptr;
    int i;
    i = 0;
    ptr = malloc (size);
    if (!ptr)
    return NULL;
    while (s1[i] != l7arf && s1[i])
    {
        ptr [i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);

}
int counter(char *p, int n)
{
    int i;
    int j;

     i = 0;
     j = 1;
     while (p[i])
     {
         if (p[i] == n)
         j++;
         i++;
     }
     return j;
}
char *deleteextra(char *p ,int n)
{
      int i;
  int j;
  i = 0;
     while (p[i])
 {
     while ( p[i] == n  && p[i + 1] == n)
   {
      j = i;
      while (p[j])
      {
        p[j] = p[j + 1];
        j++;
      }
   }
   i++;
 }

  return (p);
}
char **ft_split(char const *s1, char c)
{
	if (!s1 || !c || ft_strlen(s1) == 0)
		return NULL;
  int i;
  int j;
  int n;
  int alpha;
  char *s;
  char **ptr;
  
 s = ft_strdup(s1);
 s = ft_strtrim(s,&c);
 s = deleteextra(s,c);
 n = counter(s,c);

 ptr = (char **)malloc(sizeof(char *) * n);
 i = 0;
 j = 0;
 alpha = 0;
 while (j < n)
 {
     while(s[i] != c && i < ft_strlen(s))
     i++;
     i++;
     ptr[j] = inside(s + alpha,c,i - alpha);
     alpha = i;
     j++;
 }
  return (ptr);
}
