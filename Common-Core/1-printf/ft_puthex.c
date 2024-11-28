/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:50:28 by bpolat            #+#    #+#             */
/*   Updated: 2024/11/20 15:50:28 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthex(unsigned int n, char format) {
    int count = 0;
    char *hex_base;

    if (format == 'x')
        hex_base = "0123456789abcdef";
    else
        hex_base = "0123456789ABCDEF";

    if (n >= 16)
        count += ft_puthex(n / 16, format);
    count += ft_putchar(hex_base[n % 16]);
    return count;
}