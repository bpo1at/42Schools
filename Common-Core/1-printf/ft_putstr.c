/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:44:55 by bpolat            #+#    #+#             */
/*   Updated: 2024/11/20 15:44:55 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int ft_putstr(const char *s) {
    int count = 0;
    if (!s)
        s = "(null)";
    while (*s) {
        count += ft_putchar(*s);
        s++;
    }
    return count;
}
