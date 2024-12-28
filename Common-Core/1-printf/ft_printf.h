/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berk <berk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:50:40 by bpolat            #+#    #+#             */
/*   Updated: 2024/12/28 20:19:19 by berk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRİNTF_H
# define FT_PRİNTF_H

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
int	ft_puthexptr(unsigned long long n, char format);

#endif
