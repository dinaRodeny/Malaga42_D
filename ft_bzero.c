/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:16:34 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/25 14:35:37 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_bzero(void *s, size_t n)
{
 unsigned char * temp_ptr;
  temp_ptr = (unsigned char *) s;
 while(n > 0)
 {
    *(temp_ptr++) =0;        
    n--;
 }  
}
/*
int main(void)
{
    char buffer[] ="hello Didi";
    ft_bzero(buffer, 8);
    printf("After:  %s\n", buffer);
    return 0;

}
*/