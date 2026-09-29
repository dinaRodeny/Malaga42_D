/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 21:57:45 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/29 21:47:18 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    unsigned int i=0;
    unsigned int j=0;
    // verfiy that char is not null that one you will gonna compare 
    if(needle[0]==0)
         return((char *)&haystack[i]);
         
    while(haystack[i]&& i<len)
    {
        while(haystack[i+j]==needle[j]&& i+j<len)
        { 
            j++;
            if(needle[j]==0)
                return ((char *)&haystack[i]);
        }
        i++;
        j=0;
    }
    return (0);
}
/*
int main(void)
{
    const char *haystack = "Hello World";
    const char *needle = "World";
    size_t len = 11;
    char *result;

    result = ft_strnstr(haystack, needle, len);

    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    return (0);
}*/