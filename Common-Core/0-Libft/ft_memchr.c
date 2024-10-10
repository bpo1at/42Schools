/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:29:57 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/08 15:29:57 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr; 
    ptr = (unsigned char *)s;
  
    while (n > 0)
    {
        if (*ptr == (unsigned char)c)
            return (void *)ptr;
        ptr++;
    n--;
    }
    return NULL;
}
