/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:55:48 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/13 14:51:04 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*get_word(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		start;
	int		end;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	start = -1;
	end = 0;
	while (s[end])
	{
		if (s[end] != c && start == -1)
			start = end;
		else if ((s[end] == c || s[end + 1] == '\0') && start != -1)
		{
			words[i++] = get_word(s, start, (s[end] == c) ? end : end + 1);
			start = -1;
		}
		end++;
	}
	words[i] = NULL;
	return (words);
}
