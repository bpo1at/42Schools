/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:36:41 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/20 14:20:44 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rvalue;

	rvalue = malloc(count * size);
	if (rvalue == NULL)
		return (NULL);
	ft_bzero(rvalue, count * size);
	return (rvalue);
}
