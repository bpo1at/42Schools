/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:36:41 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/08 22:36:41 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_calloc(size_t nitems, size_t size)
{
    void *rvalue;
    rvalue = malloc(nitems * size);
    if (rvalue == NULL)
    return (NULL);
    ft_memset(rvalue, 0, nitems * size);
    return (rvalue);
}
