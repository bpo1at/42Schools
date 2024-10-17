/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:55:48 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/17 15:52:54 by bpolat           ###   ########.fr       */
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

int	ft_split_malloc(char const *s, char ***words, char c)
{
	int	word_count;

	if (!s)
		return (0);
	word_count = count_words(s, c);
	*words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!(*words))
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		start;
	int		end;

	if (!ft_split_malloc(s, &words, c))
		return (NULL);
	i = 0;
	start = -1;
	end = 0;
	while (s[end++])
	{
		if (s[end - 1] != c && start == -1)
			start = end - 1;
		else if ((s[end - 1] == c || s[end] == '\0') && start != -1)
		{
			if (s[end - 1] == c)
				words[i++] = get_word(s, start, end);
			else
				words[i++] = get_word(s, start, end + 1);
			start = -1;
		}
	}
	words[i] = NULL;
	return (words);
}
