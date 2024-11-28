/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:51:50 by bpolat            #+#    #+#             */
/*   Updated: 2024/11/20 15:51:50 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putnbr_unsigned(unsigned int n) {
    int count = 0;
    if (n > 9)
        count += ft_putnbr_unsigned(n / 10);
    count += ft_putchar((n % 10) + '0');
    return count;
}