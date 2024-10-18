/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:21:52 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/18 13:23:47 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *nd, size_t len)
{
	size_t	i;
	int		j;

	if (nd[0] == '\0')
		return ((char *)hs);
	i = 0;
	while (hs[i] != '\0' && i < len)
	{
		j = 0;
		while (hs[i + j] != '\0' && nd[j] != '\0' && hs[i + j] == nd[j] && (i
				+ j) < len)
		{
			j++;
		}
		if (nd[j] == '\0')
		{
			return ((char *)&hs[i]);
		}
		i++;
	}
	return (NULL);
}
