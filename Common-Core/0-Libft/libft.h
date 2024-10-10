/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:52:22 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/08 21:52:22 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __libft_h
#define __libft_h

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

// what it is

int				ft_isupper(int c);
int				ft_isspace(int c);
int				ft_islower(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

int ft_atoi();
int ft_Strlen();
int ft_strncmp();


#endif
