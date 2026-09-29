/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:37:38 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/25 14:32:23 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"


 void *ft_memset(void *s, int c, size_t n)
 {
    unsigned char *temp_ptr ;
    temp_ptr = (unsigned char *)s;
    while(n>0)
    {
        *(temp_ptr++)= (unsigned char)c;        
        n--;
    }
    return s;
 }
 /*
int main(void)
{
    char buffer[10] = "abcdefghi";

    printf("Before: %s\n", buffer);

    ft_memset(buffer, 'X', 3);

    printf("After:  %s\n", buffer);

    return 0;
}*/
