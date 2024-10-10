/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:30:52 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/08 21:30:52 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char static *ft_strcpy(char *dst,char *src)
{
    int i;

    i = 0;

    while(src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(dst);
}

char *ft_strdup(char *str)
{
    char *dst;
    int len;

    len = ft_strlen(str);
    dst = (char*)malloc(len + 1);
    if (dst == NULL)
        return  (NULL);
    ft_strcpy(str,dst);
    return (dst);
}
