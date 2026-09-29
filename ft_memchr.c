/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:37:25 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/28 20:58:02 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
		unsigned char *ss= (unsigned char *) s;
		unsigned char cc=(unsigned char) c;
	 	size_t i;
		i=0;
   		while(i<n)
    	{
        	if(ss[i]==cc)
           		return ((void *)&ss[i]);
         	i++;
    	}
  	return (NULL);
}