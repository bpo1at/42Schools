/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:45:48 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/17 14:00:58 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isdelim(char c, const char *delim)
{
	while (*delim)
		if (c == *delim++)
			return (1);
	return (0);
}

static int	totalnotdelim(const char *str, const char *delim)
{
	int	count;

	count = 0;
	while (*str)
		if (!isdelim(*str++, delim))
			count++;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		i;
	int		j;

	ret = malloc(totalnotdelim(s1, set) + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (!isdelim(s1[i], set))
			ret[j++] = s1[i];
		i++;
	}
	ret[j] = '\0';
	return (ret);
}
