/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 22:15:55 by delroudi          #+#    #+#             */
/*   Updated: 2026/09/24 22:28:11 by delroudi         ###   ########.fr       */
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
int	main(void)
{
	const char *str = "Hello, World!";

	printf("String: %s\n", str);
	printf("Length: %zu\n", ft_strlen(str));
	return (0);
}
