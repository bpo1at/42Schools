/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:50:50 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/11 15:56:24 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count = 1;
		n = -n;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*sret;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	count = ft_count(n);
	sret = malloc(sizeof(char) * (count + 1));
	if (sret == NULL)
		return (NULL);
	sret[count] = '\0';
	if (n < 0)
	{
		sret[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		sret[count - 1] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	return (sret);
}
