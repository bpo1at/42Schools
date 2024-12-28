/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berk <berk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:11:59 by omgorege          #+#    #+#             */
/*   Updated: 2024/12/28 20:32:40 by berk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(int c);
int		ft_printf(const char *format, ...);
int		ft_putstr(char *str);
int		ft_putnbr(long i, int base, char *pase);
int		ft_ptrnbr(size_t i, size_t base, char *pase);
#endif
