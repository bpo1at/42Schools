/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:55:48 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/12 17:55:48 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//HEADER VE NORM DÜZENLENECEK 

#include "libft.h"

char **ft_split(char const *s, char c)
{
    unsigned int i;
    int len;
    char **words;
    int strn_len;
    int n;

    strn_len = ft_strlen(s);
    words = (char **)malloc((strn_len + 1) * sizeof(char *));
    if(!words)
        return NULL;

    len = 0;
    i = 0;
    n = 0;
    while(*s)
    {
        if (s[i] == c)
        {
        words[len] = ft_substr(s, 0, i);
        len = -1;
        n++;
        }
    len++;
    i++;
    }
    return  (words);
}

/*
        #include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0) // Yeni bir kelime başlıyor
		{
			in_word = 1;
			count++;
		}
		else if (*s == c) // Kelime sona erdi
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
	word_count = count_words(s, c); // Kaç kelime olduğunu bul
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	start = -1;
	end = 0;
	while (s[end])
	{
		if (s[end] != c && start == -1) // Kelimenin başlangıcı
			start = end;
		else if ((s[end] == c || s[end + 1] == '\0') && start != -1)
		{
			words[i++] = get_word(s, start, (s[end] == c) ? end : end + 1); // Kelimeyi al
			start = -1;
		}
		end++;
	}
	words[i] = NULL; // Dizinin sonunu belirtmek için NULL koy
	return (words);
}       
        **words = &s[i-len];
        len = -1;
        **words++;
*/