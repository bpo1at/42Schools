/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:45:11 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/12 17:45:11 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//NORM VE HEADER DÜZENLENECEK

#include  "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    unsigned int i;

      if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        f(i,&s[i]);
        i++;
    }
}
