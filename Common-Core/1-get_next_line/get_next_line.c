/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:27:07 by bpolat            #+#    #+#             */
/*   Updated: 2024/11/24 16:27:07 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

static char *extract_line(char **remainder) {
    char *line;
    char *newline_pos;
    char *temp;

    newline_pos = NULL;
    if (*remainder)
        newline_pos = ft_substr(*remainder, 0, ft_strlen(*remainder));
    if (newline_pos) 
    {
        line = ft_substr(*remainder, 0, newline_pos - *remainder + 1);
        temp = ft_strdup(newline_pos + 1);
        free(*remainder);
        *remainder = temp;
    } else {
        line = ft_strdup(*remainder);
        free(*remainder);
        *remainder = NULL;
    }
    return (line);
}

static char *read_and_store(int fd, char **remainder, char *buffer) {
    char *temp;
    size_t bytes_read;

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0) {
        buffer[bytes_read] = '\0';
        if (!*remainder)
            *remainder = ft_strdup(buffer);
        else {
            temp = ft_strjoin(*remainder, buffer);
            free(*remainder);
            *remainder = temp;
        }
        if (ft_strchr(buffer, '\n'))
            break;
    }
    return (*remainder);
}

char *get_next_line(int fd) {
    static char *remainder = NULL;
    char *buffer;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buffer)
        return (NULL);
    remainder = read_and_store(fd, &remainder, buffer);
    free(buffer);
    if (!remainder)
        return (NULL);
    line = extract_line(&remainder);
    return (line);
}
