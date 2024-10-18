/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:45:48 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/18 14:38:03 by bpolat           ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		end;
	int		len;

	start = 0;
	while (s1[start] && isdelim(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && isdelim(s1[end - 1], set))
		end--;
	len = end - start;
	ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, &s1[start], len + 1);
	return (ret);
}
