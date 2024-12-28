/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berk <berk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:51:01 by bpolat            #+#    #+#             */
/*   Updated: 2024/12/28 20:19:44 by berk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(unsigned long long ptr) {
    int count = 0;

    if (ptr == 0) {
        return ft_putstr("(nil)");
    }
    count += ft_putstr("0x");
    count += ft_puthexptr(ptr, 'x');
    return count;
}
