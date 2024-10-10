/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:18:50 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/08 13:18:50 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(char *s, int c)
{
    int len;
    len = ft_strlen(s);
    while (len >= 0 && s[len]!= (char)c)
    len -- ;

    if(len < 0)
    return NULL ;

    if(s[len] == (char)c)
    return &s[len];
}
