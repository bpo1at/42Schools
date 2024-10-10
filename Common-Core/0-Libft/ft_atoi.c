/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:16:01 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/08 13:16:01 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(char* s) {
    
    int i = 0;
    int sign = 1;
    long long int result = 0;

    while(s[i] >= 9 && s[i] <=13 || s[i] == ' ')
    i++;

    if(s[i] == '+' || s[i] == '-' )
    {
        if(s[i] == '-')
        sign = -1;

    i++;
    }

   while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        
        // Check for overflow
        if (result * sign >= 2147483647) {
            return 2147483647;
        }
        if (result * sign <= -2147483648) {
            return -2147483648;
        }
        
        i++;
    }

    return (int)(result * sign);
}
