/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:05:31 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/18 13:40:50 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ret = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, len1 + 1);
	ft_strlcat(ret, s2, len1 + len2 + 1);
	return (ret);
}
