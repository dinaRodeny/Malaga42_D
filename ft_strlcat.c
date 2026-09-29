/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 22:58:19 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/27 01:23:26 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
size_t	ft_strlen(const char *s)
{
    int i =0;
    while(s[i])   
        i++;
    return(i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    
    size_t dst_size =ft_strlen(dst);
    size_t src_size =ft_strlen(src);   
	size_t i=0;    
	  
	if(dstsize<=dst_size)
	  return dstsize + src_size;
	  
	while(i+dst_size <dstsize-1&& src[i])
	{
		dst[i+dst_size]=src[i];
		i++;
	}

		dst[i+dst_size]= '\0';

	
    return dst_size+src_size;
}
/*
int	main(void)
{
	char str[4] = "Hel\0";
    const char str1[] = "Didi you are so strong";
	printf("String: %s\n", str);
	printf("Length: %zu\n", ft_strlcat(str,str1,sizeof(str)));
	    printf("After: %s\n", str);
	return (0);
}*/
