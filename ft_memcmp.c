/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 21:20:58 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/28 21:53:15 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ss1; 
    unsigned char * ss2;
    size_t i;
    
    ss1 = (unsigned char*) s1;
    ss2 = (unsigned char*) s2;
    
    i=0;
   while(i<n)
   {
     
      if( ss1[i]!=ss2[i])
          return (ss1[i]-ss2[i]);
      i++;
   }
   return (0); 
}