/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:50:40 by bpolat            #+#    #+#             */
/*   Updated: 2024/11/20 15:50:40 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <string.h>
int ft_putnbr(int n);
int ft_putstr(const char *);
int ft_putchar(char c);
int ft_printf(const char *format,...);
int ft_putnbr_unsigned(unsigned int n);
int ft_putptr(unsigned long long ptr);
int ft_puthex(unsigned int n, char format);
#endif
