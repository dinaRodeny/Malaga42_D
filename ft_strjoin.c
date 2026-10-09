/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 00:18:34 by user              #+#    #+#             */
/*   Updated: 2026/10/04 13:38:44 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *src, const char *dst)
{
	size_t	total_len;
	char	*cat;

	if (!src || !dst)
		return (NULL);
	total_len = ft_strlen(src) + ft_strlen(dst);
	cat = malloc(total_len + 1);
	if (!cat)
		return (NULL);
	ft_strlcpy(cat, src, ft_strlen(src) + 1);
	ft_strlcat(cat, dst, total_len + 1);
	return (cat);
}
