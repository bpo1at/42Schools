/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:39:19 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/08 14:39:19 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char * ptr;
    unsigned char * ptr2;
    size_t i; 
    ptr = (unsigned char *)dst;
    ptr2 = (unsigned char *)src;
    i = 0;

    while(i < n)
    {
        ptr[i] = ptr2[i];
        i++;
    }
    return (dst);
}
