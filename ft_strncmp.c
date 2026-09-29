/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:14:16 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/28 20:25:43 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
   size_t i;
   i=0;
   while((s1[i]||s2[i])&&(i<n))
   {
     
      if((unsigned char) s1[i]!=(unsigned char) s2[i])
          return ((unsigned char) s1[i]-(unsigned char) s2[i]);
      i++;
   }
   return (0);
}


