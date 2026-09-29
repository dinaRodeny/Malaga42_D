/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 21:56:28 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/25 23:01:03 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char * tmp_dest;
     const unsigned char * tmp_src;
    size_t i;
    tmp_dest = (unsigned char * ) dest;
    tmp_src = (unsigned char * ) src;
    i=0;
    if(!tmp_dest &&!tmp_src)
    {
        return(NULL);   
    }
 
    if(tmp_dest >tmp_src)
    {
        while(n--> 0)
               tmp_dest [n] =  tmp_src[n];       
    }
    else
    {
        while(i < n)
        {
            tmp_dest [i] =  tmp_src[i];  
            i++;
        }
    }
         
      return dest;
}
/*
int main(void)
{
    char  buffer []="ashatr Didiffwewefhuwrhuifwhuiwrhuirhuifrwhfuirhuiwrhuifwrhui";
    char  dest[5];
    ft_memmove(dest, buffer, sizeof(buffer));
    printf("%s\n",dest);
    return 0;
}*/