/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:51:01 by bpolat            #+#    #+#             */
/*   Updated: 2024/11/20 15:51:01 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putptr(unsigned long long ptr) {
    int count = 0;

    if (!ptr)
        return ft_putstr("(nil)");

    count += ft_putstr("0x");
    count += ft_puthex(ptr, 'x');
    return count;
}
