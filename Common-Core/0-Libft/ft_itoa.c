/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:50:50 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/18 13:38:45 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
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
	long	nb;

	nb = n;
	count = ft_count(n);
	sret = malloc(sizeof(char) * (count + 1));
	if (sret == NULL)
		return (NULL);
	sret[count] = '\0';
	if (nb < 0)
	{
		sret[0] = '-';
		nb = -nb;
	}
	while (count > 0 && nb > 0)
	{
		sret[--count] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n == 0)
		sret[0] = '0';
	return (sret);
}
