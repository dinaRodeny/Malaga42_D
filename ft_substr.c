/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:15:33 by delroudi          #+#    #+#             */
/*   Updated: 2026/10/03 17:31:00 by delroudi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	source_len;
	size_t	index;

	if (s == NULL)
		return (NULL);
	source_len = ft_strlen(s);
	if (start >= source_len)
		return (ft_strdup(""));
	if (len > source_len - start)
		len = source_len - start;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		sub[index] = s[start + index];
		index++;
	}
	sub[index] = '\0';
	return (sub);
}
