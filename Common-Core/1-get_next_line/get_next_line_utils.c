/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:43:18 by bpolat            #+#    #+#             */
/*   Updated: 2024/11/24 15:43:18 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *str) {
    size_t i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(const char *s) {
    size_t len = ft_strlen(s);
    char *copy = malloc(len + 1);
    if (!copy)
        return (NULL);
    for (size_t i = 0; i < len; i++)
        copy[i] = s[i];
    copy[len] = '\0';
    return (copy);
}

char *ft_strjoin(char *s1, char *s2) {
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    char *joined = malloc(len1 + len2 + 1);
    if (!joined)
        return (NULL);
    for (size_t i = 0; i < len1; i++)
        joined[i] = s1[i];
    for (size_t i = 0; i < len2; i++)
        joined[len1 + i] = s2[i];
    joined[len1 + len2] = '\0';
    return (joined);
}

char *ft_substr(char *s, unsigned int start, size_t len) {
    char *substr;
    size_t i;

    if (!s || start >= ft_strlen(s))
        return (ft_strdup(""));
    substr = malloc(len + 1);
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len && s[start + i]) {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
