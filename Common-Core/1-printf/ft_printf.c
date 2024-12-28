/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berk <berk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:24:57 by bpolat            #+#    #+#             */
/*   Updated: 2024/12/28 22:04:54 by berk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int handle_format(char format, va_list args) {
    if(format == '%')
        return ft_putchar('%');
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
        return ft_putptr((unsigned long long)va_arg(args, void *));
    return ft_putchar('%') + ft_putchar(format);
}

static int process_format(const char *format, va_list args) {
    int count = 0;

    while (*format) {
        if (*format == '%' && *(format + 1) != '\0') {
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


#include <stdio.h>

int main(){
	ft_printf(" %p %p \n", 0, 0);
}
