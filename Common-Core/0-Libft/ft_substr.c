/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 23:28:53 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/10 23:28:53 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char static *ft_strncpy(char *str , size_t len)
{
    char *str2;
    size_t i;

    str2 = (char*)malloc(len + 1);
    if (str2 == NULL)
    return (NULL);
    i = 0;
    while (i < len && str[i] != '\0')
    {
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0';
    return (str2);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{   
    char *str2;
    if(s == NULL)
        return NULL;
        
    if (start >= ft_strlen(s))
        return (ft_strncpy("", 0));

    if (start + len > strlen(s))
        len = ft_strlen(s) - start;

    str2 = ft_strncpy(&s[start],len); //&s[start] = (char *) s + start 
    return (str2);
}
