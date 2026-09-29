/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:44:16 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/28 18:09:47 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# include "libft.h"
char *ft_strchr(const char *s, int c)
{
    unsigned i = 0 ;
    char cc= (char) c;
    while(s[i])
    {
        if(s[i]==cc)
           return ((char *)&s[i]);
         i++;
    }
    if(cc=='\0')
    {
        return ((char *)&s[i]);
            
    }
  return (NULL);
         

}
/*
int	main(void)
{
	const char *str = "Hello, World!";
    char *str1=strchr(str ,0);
	printf("String: %s\n", str);
	printf("Length: %s\n", str1);
	return (0);
}*/

