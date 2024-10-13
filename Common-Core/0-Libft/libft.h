/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:52:22 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/13 15:27:32 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __libft_h
# define __libft_h

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef int t_sayi;
t_list new;
struct s_list neww;
t_sayi x = 5;

// what it is

int					ft_isupper(int c);
int					ft_isspace(int c);
int					ft_islower(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strdup(char *str);
t_list				*ft_lstnew(void *content);
int					ft_strlen(char *s);

#endif
