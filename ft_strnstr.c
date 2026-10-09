/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:15:33 by delroudi          #+#    #+#             */
/*   Updated: 2026/10/03 17:31:00 by delroudi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	index;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (NULL);
	index = 0;
	while (index + needle_len <= len && haystack[index] != '\0')
	{
		if (ft_strncmp(haystack + index, needle, needle_len) == 0)
			return ((char *)(haystack + index));
		index++;
	}
	return (NULL);
}
