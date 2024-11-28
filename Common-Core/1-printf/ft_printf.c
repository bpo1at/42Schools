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

int ft_printf(const char *format, ...) {
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format) {
        if (*format == '%' && *(format + 1)) {
            format++;
            if (*format == 'c') {
                char c = va_arg(args, int);
                count += ft_putchar(c);
            } else if (*format == 's') {
                char *str = va_arg(args, char *);
                count += ft_putstr(str);
            } else if (*format == 'd' || *format == 'i') {
                int num = va_arg(args, int);
                count += ft_putnbr(num);
            } else if (*format == 'u') {
                unsigned int num = va_arg(args, unsigned int);
                count += ft_putnbr_unsigned(num);
            } else if (*format == 'x' || *format == 'X') {
                unsigned int num = va_arg(args, unsigned int);
                count += ft_puthex(num, *format);
            } else if (*format == 'p') {
                unsigned long long ptr = va_arg(args, unsigned long long);
                count += ft_putptr(ptr);
            } else {
                count += ft_putchar('%');
                count += ft_putchar(*format);
            }
        } else {
            count += ft_putchar(*format);
        }
        format++;
    }

    va_end(args);
    return count;
}

int main() {
    int a = 42;

    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, world!");
    ft_printf("Signed int: %d\n", -12345);
    ft_printf("Unsigned int: %u\n", 12345);
    ft_printf("Hexadecimal (lower): %x\n", 16);
    ft_printf("Hexadecimal (upper): %X\n", 12);
    ft_printf("Pointer: %p\n", &a);

    return 0;
}

