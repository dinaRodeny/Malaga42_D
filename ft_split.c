/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 22:18:00 by user              #+#    #+#             */
/*   Updated: 2026/10/05 18:58:00 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_split_free(char **split, int count)
{
	while (count > 0)
		free(split[--count]);
	free(split);
	return (NULL);
}

static char	*ft_split_word(char const *s, char c, int *i)
{
	char	*word;
	int		len;

	while (s[*i] && s[*i] == c)
		(*i)++;
	len = ft_word_len(s + *i, c);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + *i, len + 1);
	*i += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		count;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
	{
		split[j] = ft_split_word(s, c, &i);
		if (!split[j])
			return (ft_split_free(split, j));
		j++;
	}
	split[j] = NULL;
	return (split);
}
