/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 23:51:45 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/26 22:28:57 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    unsigned char * tmp_dest;
    unsigned const char * tmp_src;
    size_t i;
    tmp_dest = (unsigned char * ) dst;
    tmp_src = (unsigned const char * ) src;
    i=0;
    if(size>0)
    {
       while(i < size-1 && tmp_src[i])
        {
            tmp_dest[i] =tmp_src[i];  
            i++;
        }
        tmp_dest[i] = '\0';
    }    
    while(tmp_src[i])
         i++;  
    return i;
}
/* 
int main(void)
{
    char  buffer []="ashatr Didi";
    char  dest[30];
    size_t  i =ft_strlcpy(dest, buffer, sizeof(buffer));
    
    printf("%zu\n",i );
    return 0;
}
*/
