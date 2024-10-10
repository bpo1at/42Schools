/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:19:03 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/08 16:19:03 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    dlen;
    size_t    slen;
    size_t    i;

    dlen = 0;
    slen = 0;
    i = 0;
    while (dst[dlen] != '\0')
        dlen++;
    while (src[slen] != '\0')
        slen++;
    if (size <= dlen)
        return (size + slen);
    while (i < size - dlen - 1 && src[i] != '\0')
    {
        dst[dlen + i] = src[i];
        i++;
    }
    dst[dlen + i] = '\0';
    return (dlen + slen);
}
