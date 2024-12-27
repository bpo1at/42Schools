/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:50:40 by bpolat            #+#    #+#             */
/*   Updated: 2024/12/13 13:59:04 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putnbr(int n);
int	ft_putstr(const char *s);
int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putptr(unsigned long long ptr);
int	ft_puthex(unsigned int n, char format);
#endif
