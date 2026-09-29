/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 19:41:04 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/25 21:25:53 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char * tmp_dest;
    unsigned char * tmp_src;
    tmp_dest = (unsigned char * ) dest;
    tmp_src = (unsigned char * ) src;
    while(n--)
       *(tmp_dest++)=  *(tmp_src++);  
            
    return dest;
}
/*
int main(void)
{
    char  buffer []="ashatr Didi";
    char  dest[30];
    ft_memcpy(dest, buffer, sizeof(buffer));
    printf("%s\n",dest);
    return 0;
}
*/