/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:24:57 by bpolat            #+#    #+#             */
/*   Updated: 2024/11/19 11:24:57 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int handle_format(char format, va_list args) {
    if (format == 'c')
        return ft_putchar(va_arg(args, int));
    if (format == 's')
        return ft_putstr(va_arg(args, char *));
    if (format == 'd' || format == 'i')
        return ft_putnbr(va_arg(args, int));
    if (format == 'u')
        return ft_putnbr_unsigned(va_arg(args, unsigned int));
    if (format == 'x' || format == 'X')
        return ft_puthex(va_arg(args, unsigned int), format);
    if (format == 'p')
        return ft_putptr(va_arg(args, unsigned long long));
    return ft_putchar('%') + ft_putchar(format);
}

static int process_format(const char *format, va_list args) {
    int count = 0;

    while (*format) {
        if (*format == '%' && *(format + 1)) {
            format++;
            count += handle_format(*format, args);
        } else {
            count += ft_putchar(*format);
        }
        format++;
    }
    return count;
}

int ft_printf(const char *format, ...) {
    va_list args;
    int count;

    va_start(args, format);
    count = process_format(format, args);
    va_end(args);

    return count;
}
